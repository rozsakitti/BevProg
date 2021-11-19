#include "../std_lib_facilities.h"


int main()
try {
    int birth_year = 2001;

    // Integer output
    cout << "decimal\t\t" << birth_year << '\n' << 
    hex<< "hexadecimal\t" << birth_year <<'\n'<<
    oct<< "octal\t\t" << birth_year << '\n';

    // Integer input
    int a;
    int b;
    int c;
    int d;
    cout << "Please enter 4 numbers!"<< endl;
    cin >> a >> hex >> b >> oct >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
    
    cout << dec << 20 << endl;
    
    // Floating point output
    cout << 1234567.89 << "\t\t(defaultfloat)\n" << fixed
         << 1234567.89 << "\t(fixed)\n" << scientific
         << 1234567.89 << "\t(scientific)\n" << endl;

    cout << "Kitti " << "Rózsa " << '\t' << " 06(30)379490 "<< '\t' << "rozsakitty56@gmail.com" << '\n' << endl;
    cout << "~Friends:~"<< '\n';
    cout << "Virág " << "Szőke " << '\t' << " 06(30)111111 "<< '\t' << "virag@gmail.com" << '\n'
  	 << "Tulipán " << "Juhász " << '\t' << " 06(30)2222222 "<< '\t' << "tulipan@gmail.com" << '\n'
         << "Liliom " << "Nagy " << '\t' << " 06(30)3333333 "<< '\t' << "liliom@gmail.com" << '\n'
         << "Leila " << "Kis " << '\t' << " 06(30)4444444 "<< '\t' << "leila@gmail.com" << '\n'
         << "Viola " << "Halász " << '\t' << " 06(30)5555555 "<< '\t' << "viola@gmail.com" << endl;
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}
