#include <iostream>
#include <string>
using namespace std;

// Nesting of member function

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_comliment(void);
    void display(void);
    void display1(void);
};
void binary::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}
void binary::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}
void binary::ones_comliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) == '0')

        {
            s.at(i) = '1';
        }
        else
            s.at(i) = '0';
    }
}


// void binary::display1(void)
// {
//     cout<<"Displaying your binary number"<<endl;
//     for (int i = 0; i < s.length(); i++){
//         cout<<s.at(i);
//     }
//     cout<<endl;

void binary::display1(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;


}
int main()
{
    // OOPs - classes and objects
    //
    binary b;
    b.read();
    b.chk_bin();
    b.display1();
    b.ones_comliment();
    b.display1();
    return 0;
}