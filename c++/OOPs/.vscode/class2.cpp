#include<iostream>
using namespace std;
class Car{
    public:
    string model;
    string name;
    int year;
};

int main(){
    Car carObj1;
    carObj1.model="Supra";
    carObj1.name="BMW";
    carObj1.year=1999;

    Car carObj2;
    carObj2.model="Mustang";
    carObj2.name="BMW";
    carObj2.year=2000;

    cout<<carObj1.name<<" "<<carObj1.model<<" " <<carObj1.year<<endl;
    cout<<carObj2.name<<" "<<carObj2.model<<" " <<carObj2.year<<endl;


    
    return 0;
}