#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // static int c = 0; // This execute only once 
    // c = c+1;          // Next time , the value of c will be retained
    return a * b;
}
float moneyRecieved(int currentMoney , float factor=1.04){
    return currentMoney * factor;


}

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b ";
    // cin >> a >> b;
    int money = 100000;
    cout<<"If you have "<<money<<"Rs in your bank account , you will recieve "<<moneyRecieved(money)<<"Rs after one year"<<endl;
    cout<<"For VIP : If you have "<<money<<"Rs in your bank account , you will recieve "<<moneyRecieved(money, 1.01)<<"Rs after one year";
    // cout << "The product of a*b is " << product(a, b) << endl;
    // cout << "The product of a*b is " << product(a, b) << endl;
    // cout << "The product of a*b is " << product(a, b) << endl;
    // cout << "The product of a*b is " << product(a, b) << endl;
    // cout << "The product of a*b is " << product(a, b) << endl;
    // cout << "The product of a*b is " << product(a, b) << endl;
    // cout << "The product of a*b is " << product(a, b) << endl;
    // cout << "The product of a*b is " << product(a, b) << endl;
    // cout << "The product of a*b is " << product(a, b) << endl;

    return 0;
}