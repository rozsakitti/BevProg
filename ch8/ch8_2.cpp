#include "../std_lib_facilities.h"

void swap_v(int a,int b)
{
	int temp; 
	temp = a, a=b; 
	b=temp;
}

void swap_r(int& a, int& b)
{
	int temp; 
	temp = a, a=b; 
	b=temp;
}

/* void swap_cr(const int& a, const int& b) //read-only references
{
	int temp; 
	temp = a;
	a=b; 
	b=temp;
}*/

	
int main()
{
	int x = 7;
	int y = 9;
	/*swap_v(x,y);
	    cout << "x is now " << x << " and y is now " << y << '\n'; //nem változik az érték*/
	    
	swap_r(x,y);
	    cout << "x is now " << x << " and y is now " << y << '\n'; //változik az érték
	    
	/*swap_v(7,9);
	    cout << "x is now " << x << " and y is now " << y << '\n';*/
	    
	/*swap_r(7,9);
	    cout << "x is now " << x << " and y is now " << y << '\n';*/
	    
	    
	const int cx = 7; //konstans miatt hiba, mert nem változhat az érték
	const int cy = 9;
	/*swap_v(cx,cy);
		cout << "cx is now " << cx << " and cy is now " << cy << '\n';
	swap_r(cx,cy);
		cout << "cx is now " << cx << " and cy is now " << cy << '\n';
		
	swap_v(7.7,9.9);
		cout << "cx is now " << cx << " and cy is now " << cy << '\n';
	swap_r(7.7,9.9);*/
		cout << "cx is now " << cx << " and cy is now " << cy << '\n'; 
	
	
	double dx = 7.7;
	double dy = 9.9;
	
/*	swap_v(dx,dy);
		cout << "dx is now " << dx << " and dy is now " << dy << '\n';
		
	swap_r(dx,dy);
		cout << "dx is now " << dx << " and dy is now " << dy << '\n';
		
	swap_v(7.7,9.9);
		cout << "dx is now " << dx << " and dy is now " << dy << '\n';
		
	swap_r(7.7,9.9);*/
		cout << "dx is now " << dx << " and dy is now " << dy << '\n';
		
	return 0;
}

