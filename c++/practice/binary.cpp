#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    // if (n%2==0)
    // {
    //     cout<<"The number is not prime "<<endl;
    // }else {
    //     cout<<"The number is  prime "<<endl;
    // }
    bool flag;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout<<"Non-prime "<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"Prime "<<endl;
    }
    

    return 0;
}