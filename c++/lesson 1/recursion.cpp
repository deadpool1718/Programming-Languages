#include <iostream>
using namespace std;
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// Step by step calcutation of a factorial(4)
// factorial(4) = 4* factorial(3)
// factorial(4) = 4* 3 *2*factorial(2)
// factorial(4) = 4* 3 *2 *factorial(1)
// factorial(4)= 4* 3 * 2*1
// factorial(4)= 24
int fibonacciSeries(int n){
    if (n<2)
    {
        return 1;
    }
    return fibonacciSeries(n-1)+ fibonacciSeries(n-2);
    
}

int main()
{
    // Factorial of a number :
    // 6! = 6*5*4*3*2*1
    //  1! = 1 by definition
    //  0! = 1 by definition
    // int a;
    // cout << "Enter a number " << endl;
    // cin >> a;
    // cout << "The value of " << a << "! is " << factorial(a) << endl;
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout <<"The value of fibonacci number " <<a<<" is "<<fibonacciSeries(a)<<endl;
    return 0;
}