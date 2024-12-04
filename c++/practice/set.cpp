#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    double c;
    cout << "Enter the value of a "<<endl;
    cin >> a;
    cout << "Enter the value of b "<<endl;
    cin >> b;
    cout << "Enter the value of c "<<endl;
    cin >> c;
    cout << "The sum of a+b is " << a + b<<endl;
    cout << "The sum of a+c is " << a + c<<endl;
    cout << "The product of a*c is " << a * c<<endl;
    cout << "The division of a/c is " << a / c<<endl;
    cout << "The product of a*b is " << a * b<<endl;
    cout << "The division of a/b is " << a / b<<endl;
    return 0;
}