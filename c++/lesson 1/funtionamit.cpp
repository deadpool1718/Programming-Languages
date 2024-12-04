#include <iostream>
using namespace std;
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// int sum(int a, b);<<<< Not acceptable
int sum(int, int);// ><<<<<<<<Acceptable
int sum(int a, int b);
// void g(void);>>>>>>Acceptable
void g();


int main()
{
    int num1, num2;
    cout << "Enter the value of num1: " << endl;
    cin >> num1;
    cout << "Enter the value of num2: " << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void g(){
    cout<<"\nHello , Good morning";
}
