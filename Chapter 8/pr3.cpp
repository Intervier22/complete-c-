#include <iostream>
using namespace std;
int avg(int x,int y,int z){
    int c=(x+y+z)/3;
    return c;
}

int main(){
    int x,y,z;

    cout<<"Enter the first number\n";
    cin>>x;
    cout<<"Enter the second number\n";
    cin>>y;
    cout<<"Enter the third number\n";
    cin>>z;

    int a=avg(x,y,z);
    cout<<"THe average is "<<a;
    return 0;
}