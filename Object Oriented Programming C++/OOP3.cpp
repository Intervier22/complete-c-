#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itmPrice[100];
    int counter;

public:
    void init(void) { counter = 0; }
    void setData(void);
    void display(void);

};

void shop::setData(void){
    cout<<"Enter the Id of the item "<<counter<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of item "<<counter<<endl;
    cin>>itmPrice[counter];
    counter++;

}
void shop::display(void){
    for (int i = 0; i < counter; i++)
    {
        /* code */
    cout<<"The id of the item is "<<itemId[i]<<" the price is "<<itmPrice[i]<<endl;
    }
    
}
int main()
{
    shop dukan;
    dukan.init();
    dukan.setData();
    dukan.display();

    return 0;
}