#include <iostream>
using namespace std;
// class comlex
// {
//     int a;
//     int b;

// public:
//     void setData(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void setDataBySum(comlex o1, comlex o2)
//     {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
//     void printNumber()
//     {
//         cout << "Your complex number is " << a << "+" << b << "i." << endl;
//     }
// };
// int main()
// {
//     comlex c1, c2, c3;
//     c1.setData(1, 2);
//     c1.printNumber();

//     c2.setData(3, 4);
//     c2.printNumber();

//     c3.setDataBySum(c1, c2);
//     c3.printNumber();
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;

    }
};

int main()
{
    Complex c1;
    int a, b;
   cout<<"Enter the value of a "<<endl;
    cin >> a ;
   cout<<"Enter the value of b "<<endl;
    cin >>b;

    c1.setNumber(a,b );
    c1.printNumber();
   
    return 0;
}
