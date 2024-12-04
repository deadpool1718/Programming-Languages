#include <iostream>
using namespace std;
// void myFunction(int myNumber[5]){
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<myNumber[i]<<endl;
//     }

// }

// int main(){
//     int myNumber[5]={10,34,56,65,45};
//     // myFunction(myNumber);
//     myFunction(myNumber);

// int myFunctInt(int x);
// float myFunctFloat(float x);
// double myFunctDouble(double x,double y);
// int addFunctInt(int x,int y){
//     return x+y;
// }
// double addFunctDouble(double x,double y){
//     return x+y;
// }

// int main(){
//     int x,y;

//     cout<<"Numbers"<<endl;
//     cin>>x>>y;
//     // cout<<addFunctInt(x,y)<<endl;
//     cout<<addFunctDouble(x,y)<<endl;

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int k;
    cout<<"Enter the value of k "<<endl;
    
    cin>>k;
    int result =sum(k);
    cout<<result<<endl;

    return 0;
}