#include "std_lib_facilities.h"
int main()
	try
	{
		//1. Cout << "Success!\n";
	cout << "1. Success!\n";

		//2. cout << "Success!\n;
	cout << "2. Success!\n";

		//3. cout << "Success" << !\n"
	cout << "3. Success" << "!\n";

		
		//4. cout << success << '\n';
	cout << "4. success" << '\n';

		//5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	int res =7;

	vector<int> v(10);
	v[5]=res;
	cout << "5. Success!\n";
		
		//6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
	v[5]=7;
	if(v[5]==7) 
	cout << "6. Success!\n";

		//7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";
	int cond=0;
	if(cond==0)
		cout << "7. Success!\n";
	else
		cout << "Fail!\n";

		//8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
	bool c=true;
	if(c)
		cout << "8. Success!\n";
	else
		cout << "Fail!\n";
		
		//9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
	string s = "ape"; 
	bool e = "fool"<s; 
	if (!e) cout <<"9. Success!\n";

		//10. string s = "ape"; if (s=="fool") cout << "Success!\n";
	if(s!="fool") cout << "10. Success!\n";

		//11. string s = "ape"; if (s=="fool") cout < "Success!\n";
	if(s!="fool") cout << "11. Success!\n";

		//12. string s = "ape"; if (s+"fool") cout < "Success!\n";
	s = "ape";
        if ("fool")
            cout << "12. Success!\n";

		//13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
	vector<char> v_1(5);
	for(int i=0;i<v_1.size();++i);
	cout << "13. Success!\n";

		//14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	vector<char> v_2(5);
	for(int j=1; j<=v_2.size();++j);
	cout << "14. Success!\n";

		//15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
	string z= "15. Success!";
	for(int k=0;k<z.size();++k);
	cout << z << '\n';
	
		//16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";
	if(true)
        {
            cout << "16. Success!\n";
        }
        else
        {
            cout << "Fail!\n";
        }

		//17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
	int x=2000;
	char c1=x;
	if(c1!=2000) cout << "17. Success!\n";

		//18. string s = "Success!\n"; for (int i=0; i<u.size(); ++i) cout << s[i];
	string u = "Success!\n";
	cout << "18. ";
	for (int l=0; l<u.size();++l)
		cout << u[l];
	
		//19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	vector<int> v3(5);
	cout << "19. ";
	for (int m=0; m<=v3.size();++m)
	{
		cout << "Success!\n";
	}
	
		//20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
	int i=0;
	int j=9;
	while (i < 10)
        {
            ++i;
            if (j < i)
            {
                cout << "20. Success!\n";
            }
        }
        
		//21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
	int x1=2;
	double d = 5 / (x1 / 2);

		if (d == 2 * (x1 + 0.5))
		{
		    cout << "21. Success!\n";
		}
		
		//22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
	string w = "Success!";
        cout << "22. ";
        for (int i = 0; i <= w.size(); ++i)
        {
            cout << w[i] << " ";
        }
        
		//23. int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
        int y=0;
        int g=9;
        cout << "\n23. ";
        while (y < 10)
        {
            ++y;
            if (g<y)
            {
                cout << "Success!\n";
            }
        }

		//24. int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
	int a = 4;
        double d1 = 5.0 / (a-2);
        cout << "24. " ;
        if (d1 == a-2 + 0.5)
        {
            cout << "Success!" << endl;
        }
	
		//25. cin << "Success!\n";
	cout << "25. Success!\n";

	keep_window_open();
	return 0;
	}
	catch (exception& e) 
	{
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
	}
	catch (...) 
	{
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
	}
