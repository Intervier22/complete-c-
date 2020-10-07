#include <iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter the principal\n";
    cin>>p;
    

    cout<<"Enter the rate percent\n  ";
    cin>>r;

    cout<<"Enter the time\n";
    cin>>t;

    cout<<"The simple interest is :  "<<(p*r*t)/100;
    return 0;
    }