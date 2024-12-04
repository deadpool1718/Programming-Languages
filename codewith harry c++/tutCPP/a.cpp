#include <iostream>
using namespace std;
class cricket
{
    const int over = 20;
    int runrate;

public:
    void countrun(int x)
    {
        runrate = x;
        int run = x * over;
        cout << "Total runs scored in " << over << " overs is: " << run << endl;
    }
};
int main()
{
    cricket amit;
    int a;
    cin >> a;
    int totalscore = 20 * a;
    amit.countrun(a);
    cout<<"Total runs scored in 20 overs is: "<<totalscore<<endl;

    return 0;
}