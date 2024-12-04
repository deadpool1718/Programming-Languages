#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;
    friend void distance(point o1, point o2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void Display()
    {
        cout << x << "," << y << endl;
    }
};
void distance(point o1, point o2)
{
    float dist;
    dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << dist << endl;
}
int main()
{
    point p(2,3);
    p.Display();
    
    point q(8,0);
    q.Display();
    distance(p,q);

    

    return 0;
}