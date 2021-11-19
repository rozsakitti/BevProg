#include "../std_lib_facilities.h"

/*
//9.4.1
struct Date {
    int y;
    int m;
    int d;
};
void init_day(Date& dd, int y, int m, int d)
{
    if (m < 1 || m > 12) error("invalid month");
    if (d < 1 || d > 31) error("impossible day");
    dd.y = y;
    dd.m = m;
    dd.d = d;
}
void add_day(Date& dd, int n)
{
    dd.d += n;
    if (dd.d > 31) dd.d %= 31;
}
ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}
int main()
{
    Date today;
    init_day(today, 1978, 6, 25);
    Date tomorrow = today;
    add_day(tomorrow, 1);
    cout << today << '\n'
         << tomorrow << '\n';
    //Date bad_day;
    //init_day(bad_day, 2004, 13, -5);
    
    return 0;
}*/

//--------------------------------------------------------------------------------------
/*

//9.4.2
struct Date {
    int y, m, d;                    // year, month, day
    Date(int y, int m, int d);      // check for valid date and initialize
    void add_day(int n);            // increase the Date by n days
};
Date::Date(int yy, int mm, int dd) :y{yy}, m{mm}, d{dd}
{
    if (m < 1 || 12 < m) error("invalid month");
    if (d < 1 || 31 < d) error("impossible day");
}
void Date::add_day(int n)
{
    d += n;
    if (d > 31) d %= 31;
}
ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}
int main()
try {
    Date today(1978, 6, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << today << '\n'
         << tomorrow << '\n';
    //Date bad_day(2004, 13, -5);
}
catch(exception& e) {
    cerr << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "unknown error" << '\n';
    return 2;
}*/

//--------------------------------------------------------------------------------------

/*
//9.4.3
class Date {
    int y, m, d;
public:
    Date(int y, int m, int d);      // check for valid date and initialize
    void add_day(int n);            // increase the Date by n days
    int month() const { return m; }
    int day() const { return d; }
    int year() const { return y; }
};
Date::Date(int yy, int mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
    if (m < 1 || 12 < m) error("invalid month");
    if (d < 1 || 31 < d) error("impossible day");
}
void Date::add_day(int n)
{
    d += n;
    if (d > 31) d %= 31;
}
ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
              << ',' << d.month()
              << ',' << d.day() << ')';
}
int main()
try {
    Date today(1978, 6, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << today << '\n'
         << tomorrow << '\n';
    //Date bad_day(2004, 13, -5);
}
catch(exception& e) {
    cerr << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "unknown error" << '\n';
    return 2;
}
*/

//--------------------------------------------------------------------------------------

/*
// 9.7.1
enum class Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

vector<string> month_tbl = { "January", "February", "March", "April",
                             "May", "June", "July", "August", "September",
                             "October", "November", "December" };

ostream& operator<<(ostream& os, Month m)
{
    return os << month_tbl[int(m)];
}

class Date {
    int y;
    Month m;
    int d;
public:
    Date(int y, Month m, int d);
    void add_day(int n);
    int year() const { return y; }
    Month month() const { return m; }
    int day() const { return d; }
};

Date::Date(int yy, Month mm, int dd):y{yy}, m{mm}, d{dd}
{
    if (d < 1 || 31 < d) error("impossible day");
}

void Date::add_day(int n)
{
    d += n;
    if (d > 31) d %= 31;
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ',' << d.month()<< ',' << d.day() << ')';
}
int main()
try {
    Date today(1978, Month::jun, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);

    cout << today << '\n'
         << tomorrow << '\n';

    //Date bad_day(2004, 13, -5);
}
catch(exception& e) {
    cerr << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "unknown error" << '\n';
    return 2;
} 
*/

//--------------------------------------------------------------------------------------

// 9.7.4

enum class Month{
	jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << int(m);
}

class Year{
	static const int min = 1800;
	static const int max = 2200;

public:
	class Invalid{};
	Year(int x): y(x) {if(x<min || max<=x) throw Invalid{};}
	int year() {return y;}
	void increment() {y++;}

private:
	int y;
};

class Date {
private:
	Year y;
	Month m;
	int d;
	bool is_valid();

public:
	class Invalid {};
	Date(Year yy, Month mm, int dd): y(yy), m(mm), d(dd) {if(!is_valid()) throw Invalid{};}
	void add_day(int n);

	Year year() {return y;}
	Month month() {return m;}
	int day() {return d;}
};

/* not working, BUT WHYY????
Date::Date(Year yy, Month mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
	if(!is_valid()) throw Invalid{};
}*/


ostream& operator<<(ostream& os, Year m)
{
	return os << m.year();
}

Year operator++(Year& m)
{
	m.increment();
	return m;
}

bool Date::is_valid()
{
	if (m < Month::jan || m > Month::dec || d < 1 || d > 31) return false;

	return true;
}

void Date::add_day(int n)
{
	d+=n;
	do{
		if (d>31)
		{
			++m;
			d-=31;
		}

		if(m == Month::jan)
		{
			++y;
		}
	} while(d > 31);
}



int main()
{
	try{

	Date today{Year{2021},Month::feb, 17};
	Date tomorrow(today);
	tomorrow.add_day(1);

	cout << "Today: " << today.year() << "." << today.month() << "." << today.day() << endl;
	cout << "tomorrow: " << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << endl;

	return 0;
	}

	catch (exception& e)
	{
		cerr << e.what() << endl;
		return 1;
	}
	
	catch (Date::Invalid)
	{
		cerr << "Invalid date" << endl;
		return 2;
	}

	catch (Year::Invalid)
	{
		cerr << "Invalid date" << endl;
		return 3;
	}
}

