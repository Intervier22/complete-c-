#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        void setdata(int a1,int b1){
            a=a1;
            b=b1;
        }

        void sum(complex o1,complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void printsum(){
            cout<< "The complex number is "<< a <<"+ "<<b<<"i";
        }
};
int main(){

    complex c1,c2,c3;

    c1.setdata(1,5);
    c2.setdata(3,4);
    c3.sum(c1,c2);
    c3.printsum();
    
    return 0;
}