#include <iostream>
using namespace std;
class Shop
{
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void getPrice(void);
    void setPrice(void);
    void display(void);
};
void Shop::setPrice(void)
{
    if (counter >= 50)
    {
        cout << "Shop is full, therefore can't add more items." << endl;
        exit(0);
    }
    cout << "Enter id of your item:" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item:" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::display(void)
{
    if (counter == 0)
    {
        cout << "Shop is empty." << endl;
        exit(0);
    }
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item id " << itemId[i] << " is: " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.display();

    return 0;
}