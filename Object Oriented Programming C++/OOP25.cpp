#include <iostream>
using namespace std;
class kirana{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }

        void printData(){
            cout<<"The id of item is "<<id<<endl;
            cout<<"The price of item is "<<price<<endl;
        }
};
int main(){

    int size =3,i,id;
    float p;
    kirana *ptr= new kirana[size];
    kirana *ptrTemp=ptr;

    for ( i = 0; i < size; i++)
    {
        /* code */

        cout<<"Enter the id and price of item "<<(i+1)<<endl;
        cin>>id>>p;

        ptr->setData(id,p);
        ptr++;
    }

    for(i=0;i<size;i++){
        ptrTemp->printData();
        ptrTemp++;
    }
        
    return 0;
}