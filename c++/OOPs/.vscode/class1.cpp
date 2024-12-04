#include<iostream>
using namespace std;
class classA{
    public:
    int myNum;
    string myString;
};


int main(){
    classA myObj;
    myObj.myNum=45;
    myObj.myString="I Love You";
    cout<<myObj.myNum<<endl;
    cout<<myObj.myString<<endl;
    
    return 0;
}