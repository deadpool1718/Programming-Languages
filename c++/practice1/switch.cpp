// #include <iostream>
// using namespace std;

// int main()
// {
//     int x, y;
//     char op;
//     string ss;
//     cout << "Enter the first number:" << endl;
//     cin >> x;
//     cout << "Enter the second number:" << endl;
//     cin >> y;
//     cout << "Enter the operation:" << endl;
//     cin >> op;
//     switch (op)
//     {
//     case '+':
//         cout << "The addition of the numbers is :" << (x + y);
//         break;
//     case '-':
//         cout << "The subtraction is :" << (x - y);
//         break;
//     case '*':
//         cout << "The multiplication is :" << (x * y);
//         break;
//     case '/':
//         cout << "The division is : " << (x / y);
//         break;

//     default:
//         break;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables
    int i;
    double d;
    string s;

    // Initialize variables by reading input
    cin >> i >> d;
    cin.ignore(); // Ignore newline character
    getline(cin, s);

    // Perform operations
    int sumInt = i + 4; // Sum of i plus 4
    double sumDouble = d + 4.0; // Sum of d plus 4.0
    string concatString = s + " is awesome!"; // Concatenation of s with additional string

    // Print results
    cout << sumInt << endl;
    cout << fixed << setprecision(1) << sumDouble << endl;
    cout << concatString << endl;

    return 0;
}
