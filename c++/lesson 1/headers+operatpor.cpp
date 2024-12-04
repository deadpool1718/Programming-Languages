#include <iostream>
using namespace std;
int main()
{
    int a = 23, b = 8;
    cout << "Operator in c++" << endl;
    cout << "Following are types of operators " << endl;
    // Airthmetic operators
    cout << "The value of a+b is " << a + b << endl;
    cout << "The value of a+b is " << a - b << endl;
    cout << "The value of a*b is " << a * b << endl;
    cout << "The value of a%b is " << a % b << endl;
    cout << "The value of a/b is " << a / b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;
    cout << endl;
    // Assignment operators <<to asign operators
    // int char

    // coparison operators
    cout << "Following are comparison operators" << endl;
    cout << "The value of a==b is " << (a == b) << endl;
    cout << "The value of a!=b is " << (a != b) << endl;
    cout << "The value of a<=b is " << (a <= b) << endl;
    cout << "The value of a>=b is " << (a >= b) << endl;
    cout << "The value of a<b is " << (a < b) << endl;
    cout << "The value of a>b is " << (a > b) << endl;

    // Logical operatoer
    cout << "Following are the logical operators" << endl;
    cout << "The value of this logical & operetor ((a>b) && (a==b)) is " << ((a > b) && (a == b)) << endl;

    cout << "The value of this logical not operetor (!a==b)) is " << (!a == b) << endl;
    return 0;
}
