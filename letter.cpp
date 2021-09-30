#include "std_lib_facilities.h"
int main(){

cout << "Please enter your first name!" << endl;
	string my_name;
	cin >> my_name;
	cout << "Hello, " << my_name << "!\n" << endl;

cout << "Enter the name of the person you want to write to!" << endl;
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n" << endl;

cout << "How are you? I am fine. I miss you so much. We should meet as soon as possible and drink a coffee, because I can not wait to see each other.\n" << endl;

cout << "Enter the name of your friend you want to ask about!" << endl;
	string friend_name;
    	cin >> friend_name;
    	
cout << "\nHave you seen " << friend_name << " lately?\n" << endl;
   	 
char friend_sex;
	cout << "Enter an 'm' if your friend is male and an 'f' if your friend is female!\n" << endl;
		cin >> friend_sex;
		
	if(friend_sex=='m') 
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	else if(friend_sex=='f')
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
 
 cout << "Please enter the age of the recipient!" << endl;
 int age;
 cin >> age;
	if(age <= 0 || age >= 110)
	simple_error("you're kidding!");
	
	if(age<12)
	cout << "Next year you will be " << age+1 << endl;
	
	if(age==17)
	cout << "Next year you will be able to vote." << endl;
	
	if(age>70)
	cout << "I hope you are enjoying retirement." << endl;
	
	cout << "I hear you just had a birthday and you are " << age << " years old.\n" << endl;

cout << "Yours sincerely," << endl;
cout << my_name << endl;
return 0;
}
