#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int marks[]={2344,43,234,232,4523,34234};
    int i=0;
    // do
    // {
    //     cout<<"The marks of "<<i<<" is "<<setw(5)<<marks[i]<<"."<<endl;
    //     i++;
    // } while (i<6);

    // cout<<endl;
    // cout<<endl;


    while (i<6)
    {
        cout<<"The marks of "<<i<<" is "<<setw(5)<<marks[i]<<"."<<endl;
        i++;
    }
    return 0;
}