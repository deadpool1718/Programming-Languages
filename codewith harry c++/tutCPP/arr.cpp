#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};


void Display(struct Array arr)
{
    cout << "Displaying the array as follows: " << endl;\

    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}



int main()
{
    // int arr;
    struct Array arr = {{3, 5, 89, 56, 23, 4, 25, 67, 26, 29},10,10};
    Display(arr);
    return 0;
}