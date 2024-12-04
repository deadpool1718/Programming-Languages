#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
  

public:
    void initcounter(void);
    
    void setPrice(void);
    void displayPrice(void);
};


void Shop::setPrice(void)
{
    cout << "Enter Id of your item no " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i];
    }
}

int main()
{
    Shop khalid;
   

    khalid.setPrice();
    khalid.setPrice();
    khalid.displayPrice();
    return 0;
}