#include "../std_lib_facilities.h"

struct Point{
	int x, y;
};

int main()
{
try{
	vector<Point> original_points;
	vector<Point> processed_points;

	cout << "PLease enter seven pairs: \n";

	int x, y, a = 1;

	while(a != 8){
		cout << a << ". pair:\t";
		cin >> x >> y;
		original_points.push_back(Point{x,y});
		a++;
	}

	cout << endl;
	for (const auto& p:original_points){
		cout << p.x << " " << p.y << endl;
	}

	string ofname = "mydata.txt";
	ofstream ost {ofname};
	if (!ost) error("Can't open output file ", ofname);

	for (const auto& p:original_points){
		ost << p.x << " " << p.y << endl;
	}

	ost.close();

	string iname = "mydata.txt";
	ifstream ist {iname};
	if (!ist) error("Can't open input file ", iname);

	while(ist >> x >> y){
		processed_points.push_back(Point{x,y});
	}
	
	cout << endl;
	for (const auto& p:processed_points){
		cout << p.x << " " << p.y << endl;
	}

	if(original_points.size() == processed_points.size())
	{
		for (int i = 0; i < original_points.size(); ++i)
		{
			if(original_points[i].x != processed_points[i].x || original_points[i].y != processed_points[i].y)
				cout << "Something went wrong" << endl;
		}
	}
	else
		cout << "Something went wrong" << endl;

	return 0;
}

	catch(runtime_error& e) {
		cerr << "Error: " << e.what() << endl;
		return 1;
	}
}
