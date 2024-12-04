#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // int a = 4;
    // cout <<"The value of a was: "<<a<<endl;

    // a = 43;
    // cout <<"The value of a is: "<<a<<endl;

    // Constants in c++
    //  const float a = 5.4;
    //  cout <<"The value of a was "<<a<<endl;
    //  a = 50.5;
    //  cout <<"The value of a is "<<a<<endl;// You will get error because a is constant

    // Munipalators
    // int a = 3, b = 56, c = 45344;
    // cout << "The value of a without setw is " << a << endl;
    // cout << "The value of b without setw is " << b<< endl;
    // cout << "The value of c without setw is " << c << endl;
    // cout<<endl;
    // cout << "The value of a without setw is " <<setw(4)<< a << endl;
    // cout << "The value of b without setw is " <<setw(4)<< b << endl;
    // cout << "The value of c without setw is " <<setw(4)<< c << endl;

    //operetors precedence
     int a = 4, b = 5 ,c,d ;
     c = (a*7)+b;
     d =((((a*b)+b)-45)+95);

     cout<<c<<endl;
     cout<<d<<endl;


    return 0;
}