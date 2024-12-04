#include <iostream>
using namespace std;

int main()
{
    char button;
    // cout << "Enter the button " << endl;
    // cin >> button;

    // if (button == 'a')
    // {
    //     cout << "Halo" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "I am venegence " << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "You are awesome " << endl;
    // }
    // else
    // {
    //     cout << "I am still learning more " << endl;
    // }
    cout<<"Enter the charater "<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout << "Halo" << endl;
        break;
    case 'b':
        cout << "Halo" << endl;
        break;
    case 'c':
        cout << "Solo" << endl;
        break;
    case 'd':
        cout << "Dhalo" << endl;
        break;
    case 'e':
        cout << "Murakh balak" << endl;
        break;
    case 'f':
        cout << "Chutiye" << endl;
        break;

    default:
    cout<<"I am still learning "<<endl;
        break;
    }

    return 0;
}