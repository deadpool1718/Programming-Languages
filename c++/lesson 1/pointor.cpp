#include<iostream>
using namespace std;

int main(){
    // What is a pointor?
    // A data type that hold address of other data types
    int a = 4;
    int* b = &a;
    // & <<<<<<<<< address of operator
    // * <<<<<<<<< derefernce operator
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<b<<endl;
    cout<<"The value at Address of b is "<<b<<endl;


    return 0;
}