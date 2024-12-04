-#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// // This will swap values of a and b
// int swap(int a, int b){//    temp  a   b
//     int temp = a;            //4   4   5
//     a =b;                    //4   5   5
//     b= temp;
// }
//  Call by reference in using variables c++
void swapPointer(int *a, int *b)
{                  //    temp  a   b
    int temp = *a; //          4   4   5
    *a = *b;       //          4   4   5

    *b = temp;
}
//  Call by reference in using  variables c++
//  Call by reference in using  variables c++

void swapReferenceVar(int &a, int &b)
{                  //    temp  a   b
    int temp = a; //          4   4   5
    a = b;       //          4   4   5

    b = temp;

}


int main()
{
    int a = 4, b = 5;
    // The sum of 4 and 5 is " <<sum(4,5)<<endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // swap(a, b);// This will swap values of a and b
    // swapPointer(&a, &b); // This will swap values of a and b using pointer reference
    swapReferenceVar(a, b); // This will swap values of a and b using reference variables
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}