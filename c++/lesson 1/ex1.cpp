// #include <iostream>
// using namespace std;
// int c = 56;
// int main()
// {
//     // built in data types
//     // int a, b, c;

//     // cout<< "Enter the value of a :"<<endl;
//     // cin>>a;
//     // cout<< "Enter the value of b :"<<endl;

//     // cin>>b;

//     // c = a+b;
//     // cout<<"The sum is "<<c<<endl;
//     // cout<<"The global c is "<<::c<<endl;
//     // float d = 33.32F;
//     // long double e = 33.32L;

//     // cout << "The value of d is " << d << endl<< "The value of e is " << e << endl;

//     //*********Reference variable*************
//     // float x = 455;
//     // float & y = x;
//     // cout<<x<<endl;
//     // cout<<y<<endl;

//     //*****Typing casting******
//     int a = 45;
//     float b = 45.34;
//     cout << "The value of a is " << (float)a << endl;
//     cout << "The value of a is " << float(a) << endl;
//     cout << "The value of b is " << (int)b << endl;
//     cout << "The value of b is " << int(b) << endl;

//     int c = int(b);
//     cout << "The expression is " << a + b << endl;

//     cout << "The expression is " << a + int(b) << endl;
//     cout << "The expression is " << a + (int)b << endl;

//     return 0;
// }
#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee setData ::(int a1, int b1, int c1)

{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee amit;
    amin.d = 25;

    amin.e = 564;
    amin.setData(1, 2, 4);
    amin.getData();
    return 0;
}
