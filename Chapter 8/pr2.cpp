#include <iostream>
using namespace std;

int main(){
    int n1=0,n2=1,number,n3;

    cout<<"Enter the number of elements\n";
    cin>>number;

    cout<<n1<<" "<<n2<<" ";
    for (int i = 2; i <number; ++i)
    {
        /* code */
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    
    return 0;
}