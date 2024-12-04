#include <iostream>
using namespace std;
void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        cout << " From " << A << " to " << C << endl;
        TOH(n - 1, B, A, C);
    }
}
int sum(int n)
{
    if (n > 0)

        sum(n - 1) + n;
        return sum;
}

int main()
{
    int x;
    cin >> x;
    cout << sum(x);
    return 0;
}