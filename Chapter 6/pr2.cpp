#include <iostream>
using namespace std;
void mult(int *mul,int nm,int n ){
    cout<<"The table of "<< nm <<" :"<<endl;
    for(int i=1;i<=n;i++){
        mul[i]=nm*i;
    }
    for(int i=1;i<=10;i++){
        cout<<nm<<" X "<<i <<" = "<<mul[i]<<endl;

    }
    cout<<endl<<endl<<"************************************************************************"<<endl;
}

int main(){
    int x,y,z;
    int mul[3][10];
    cout<<"Enter the first number which you want the table of"<<endl;
    cin>>x;
    cout<<"Enter the second number which you want the table of"<<endl;
    cin>>y;
    cout<<"Enter the third number which you want the table of"<<endl;
    cin>>z;

    mult(mul[0],x,10);
    mult(mul[1],y,10);
    mult(mul[2],z,10);
    return 0;
}