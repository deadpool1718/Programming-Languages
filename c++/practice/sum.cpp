#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // int a,b;
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;
    // cout<<"The sum of a+b is "<<a+b<<endl;

    // int num1,num2,temp;
    // cout<<"Input num1 "<<endl;
    // cin>>num1;
    // cout<<"Input num2 "<<endl;
    // cin>>num2;
    // temp=num1;
    // num1=num2;
    // num2=temp;
    // cout<<"After swaping num1 "<<num1<<endl;
    // cout<<"After swaping num2 "<<num2<<endl;

    // int radius = 6;
    // float pi=3.14;
    // cout<<"The volume of the sphere is "<<(radius*radius*radius*4/3*pi)<<endl;
    // int side =5;
    // cout<<"The volume of cube is "<<side*side*side<<endl;

    // int radius;
    // float height;
    // double pi=3.14;
    // cout<<"Enter the value of radius "<<endl;
    // cin>>radius;
    // cout<<"Enter the value of height "<<endl;
    // cin>>height;
    // cout<<"The area of cylinder is "<<pi*radius*radius*height<<endl;

    // float side1, side2,side3, area, s;
    // cout << "Enter the value of a " << endl;
    // cin >> side1;
    // cout << "Enter the value of b " << endl;
    // cin >> side2;
    // cout << "Enter the value of c " << endl;
    // cin >> side3;
    // s = (side1 + side2 + side3)/2;

    // area = sqrt(s * (s -side1) * (s - side2) * (s -side3));
    // cout << "Area of triangle using Heron formula is " <<area<<endl ;

    // float height, width, perimeter, area;
    // cout << "Enter the value of height " << endl;
    // cin >> height;
    // cout << "Enter the value of width " << endl;
    // cin >> width;
    // perimeter = 2 * (height + width);
    // area = height * width;
    // cout << "The perimeter of a rectangle is " << perimeter << endl;
    // cout << "The area of a rectangle is " << area << endl;

    // float radius;
    // double pi=3.14;
    // cout << "Enter the vaue of radius " << endl;
    // cin >> radius;
    // cout<<"The circumstance of a circle is "<<2*pi*radius<<endl;
    // cout<<"The area of a circle is "<<radius*pi*radius<<endl;

    // string name1, name2;
    // cout << "Enter the name1 " << endl;
    // cin >> name1;
    // cout << "Enter the name2 " << endl;
    // cin>>name2;

    // string temp = name1;
    // name1 = name2;
    // name2 = temp;

    // cout << "The name1 after swaping " << name1 <<" "<<name2 <<endl;
    cout << endl;

    // int radius;
    // double area,circumstance;
    // double pi=3.14;

    // cout<<"The value of radius "<<endl;
    // cin>>radius;
    // area = pi*radius*radius;
    // circumstance=2*pi*radius;
    // cout<<"The area of the circle is " <<area<<endl;
    // cout<<"The area of the circumstance is " <<circumstance<<endl;

    // int a, b, temp;
    // cout << "Enter the value of a " << endl;
    // cin >> a;
    // cout << "Enter the value of b " << endl;
    // cin >> b;
    // cout << "Before interchanging the numbers " << a << b << endl;

    // temp = a;
    // a = b;
    // b = temp;
    // cout << "After interchanging the numbers " << a << b << endl;

    // double centi,kms,meter;
    // cout<<"Enter the value in centimeter "<<endl;
    // cin>>centi;
    // meter = centi/100;
    // kms=centi/100000;
    // cout<<"The value of centi in kms "<<kms<<endl;
    // cout<<"The value of centi in meter "<<meter<<endl;

    // double p,i,r,t;
    // cout<<"Enter the value of principal amount "<<endl;
    // cin>>p;
    // cout<<"Enter the value of time "<<endl;
    // cin>>t;
    // cout<<"Enter the value of interest "<<endl;
    // cin>>i;
    // i = (p*t*r)/100;
    // cout<<"The value of simple interest is "<<i<<endl;

    //    int a, b, c;
    // cin >> a >> b >> c;
    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         cout << a << " is the greatest integer  " << endl;
    //     }
    //     else
    //     {
    //         cout << c << endl;
    //     }
    // }
    // else
    // {
    //     if (b > c)
    //     {
    //         cout << b << "  is the greatest integer " << endl;
    //     }
    //     else
    //     {
    //         cout << c << " is the greatest integer" << endl;
    //     }
    // }
        int n;
    cin >> n;
    int sum = 0;
    for (int counter = 1 ; counter <= n; counter++)
    {
        sum = sum + counter;
    }
    cout << sum;



    return 0;
}