#include<iostream>
using namespace std; 
int main (){
    // selection control structure 
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;
    // if((age<18)&&(age>0)){
    //     cout<<"You can not enter my party"<<endl;

    // }else if(age==18){
    //     cout<<"You are a kid , you will get a kid pass"<<endl;
    // }else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }else

    // cout<<"You can enter my party"<<endl;
    // selection control structure : switch cases
    switch (age)
    {
    case 18:
        cout<<"Your are 18 "<<endl;
        break;
    case 22:
        cout<<"Your are 22 "<<endl;
        break;
     case 20:
        cout<<"Your are 20 "<<endl;
        break;
    default:
    cout <<"No special cases"<<endl;

        break;
    }
    cout<<"Done with switch cases"<<endl;

    return 0;
}











