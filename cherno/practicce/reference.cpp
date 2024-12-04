#include<iostream>
using namespace std;
void Increment(int& value){
    value++;
}
int main(){
    int a=5;
    int& ref=a;
    // ref =2;
    // cout<<ref;
    
    Increment(a);

    return 0;
}