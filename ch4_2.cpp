#include "../std_lib_facilities.h"
int main()
{
	//6-11
	double val1;
	char exit;
	char meter=0;
	double max=numeric_limits<double>::lowest();
	double min=numeric_limits<double>::max();
	double sum=0;
	constexpr double m_per_cm=100;
	constexpr double in_per_cm=2.54;
	constexpr double ft_per_in=12;
	vector<double> v;
	cout << "Please add a number and a unit! (m, cm=c, inch=i, ft=f): ";
	while (cin >> val1 >> meter)
	{
		cout << "\nCurrent number: " << val1 <<" " << meter << endl;
		switch(meter){
			case 'm':
				cout << "Number in m: "<< val1 <<" m" << endl;
				break;

			case 'c':
				val1/=m_per_cm;
				cout << "Number in m: "<< val1 <<" m" << endl;
				break;

			case 'i':
				val1*=in_per_cm;
				val1/=m_per_cm;
				cout << "Number in m: "<< val1 <<" m" << endl;
				break;

			case 'f':
				val1*=ft_per_in;
				val1*=in_per_cm;
				val1/=m_per_cm;
				cout << "Number in m: "<< val1 <<" m" << endl;
				break;
			default:
				cout << "Error, not valid char";
				break;
				}
		sum+=val1;
		v.push_back(val1);
		cout << "Do you want to continue? (yes => Please enter a number (m, cm=c, inch=i, ft=f) , No = |)\n";
		cin >> exit;
		if(exit=='|'){return 0;}
	}
	sort(v);
	cout << "All values in m: \n" << endl;;
	min=v[0];
	max=v[v.size()-1];
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
	cout << "the smallest so far(in m): " << min <<endl;
	cout << "the largest so far(in m): " << max <<endl;
	cout << "the number of values: " << v.size() << endl;
	cout << "the sum of values: " << sum << endl;
	return 0;
}



