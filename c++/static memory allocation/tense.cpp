#include <iostream>
using namespace std;
class Employee
{
    int Id;
    static int count; // count is static data member

public:
    void setData(void)
    {
        cout << "Enter the Id" << endl;
        cin >> Id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of employee is " << Id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count " << count << endl;
    }
};
int Employee::count; // Default value is zero

int main()
{
    Employee Amit, Dinesh, Ramesh;
    Amit.setData();
    Amit.getData();
    Employee::getCount();

    Ramesh.setData();
    Ramesh.getData();
    Employee::getCount();

    Dinesh.setData();
    Dinesh.getData();
    Employee::getCount();

    return 0;
}