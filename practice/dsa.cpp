// #include <iostream>
// using namespace std;
// int add(int n, int m)
// {
//     return m + n;
// }
// int fib(int n)
// {
//     if (n <= 1)

//         return 1;
//     return fib(n - 2) + fib(n - 1);
// }

// int sum(int n)
// {

//     return sum(n - 1) + n;
// }

// int pow(int n, int m)
// {
//     if (m == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return pow(n, m - 1) * n;
//     }
// }

// int sum1(int n)
// {
//     int s = 0;
//     for (int i = 1; i <= n; i++)

//         s = s + i;

//     return s;
// }

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return fact(n - 1) * n;
//     }
// }

// // int fact(int n)
// // {
// //     if (n == 0)
// //     {
// //         return 1;
// //     }
// //     else
// //     {
// //         return fact(n - 1) * n;
// //     }
// // }
// int nCr(int n, int r)
// {
//     int t1, t2, t3;
//     t1=fact(n);
//     t2=fact(n-r);
//     t3=fact(r);
//     return t1/(t2*t3);
// }

// int main()
// {
//     int x,y;
//     cout<<"Enter the value of x,y"<<endl;
//     cin >> x>>y;
//     cout << nCr(x,y);

//     return 0;
// }

#include <iostream>
using namespace std;
void TOH(int n,char A,char B,char C){
    if(n==0)
    return ;
    TOH(n-1,A,C,B);     
    cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;   
    TOH(n-1,B,A,C);     

    
}

int main()
{
  
    int x;
    char M,W,H;
    cin>>x;
    TOH(x,M,W,H);

    return 0;
}