#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be reversed " << endl;
    cin >> n;
    int reverse;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n=n/10;
    }

    cout<<reverse<<endl;

    return 0;
}