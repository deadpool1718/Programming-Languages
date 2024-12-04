#include<iostream>
using namespace std;
int swapNum(int &x, int &y){
    int z=x;
    x=y;
    y=z;
}
// int myFunction(int x,int y){
//     return y+x;
// }

int main(){
    int x,y;
    cout<<"Enter the first number "<<endl;
    cin>>x;
    cout<<"Enter the second number "<<endl;
    cin>>y;
    // cin>>x>>y;
//     cout<<myFunction(x,y)<<endl;
cout<<"Numbers before swapping "<<x<<y<<endl;
swapNum(x,y);
cout<<"Numbers before swapping "<<x<<y<<endl;
    
    return 0;
}