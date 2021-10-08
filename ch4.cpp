#include "std_lib_facilities.h"
int main()
{

	//1-5
	double val1;
	double val2;
	char exit;
	double diff1;
	double diff2 =1.0/100;
	cout << "Please enter 2 integers!" << endl;
	while(cin >> val1 >> val2)
	{

		if(val1>val2)
		{
			cout << "The smaller value is: " << val2 << endl;
			cout << "The larger value is: " << val1 << endl;
			diff1=val1-val2;
		}
		else if(val1<val2)
		{
			cout << "The smaller value is: " << val1 << endl;
			cout << "The larger value is: " << val2 << 1endl;
			diff1=val2-val1;
		}
		else
		{
			cout << "The numbers are equal." << endl;
		}

		if(diff1<diff2)
		{
			cout << "The numbers are almost equal.\n";	
		}
		cout << "Do you want to continue? (yes = Please enter 2 numbers! , No = |)\n";
		cin >> exit; //hibásan fut a bekérés miatt
		if(exit=='|'){return 0;}
	}
	return 0;
	}



