#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number:" << endl;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        if ((i+1) % 2==0)

            continue;

        cout << "Hello world." << endl;
        cout << i << endl;
    }

    return 0;
}