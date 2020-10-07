#include <iostream>
using namespace std;

int main(){
    int n;
    int mul[10];

    cout<<"Enter the number which you want the table of :   ";
    cin>>n;

    for(int i=1;i<=10;i++){
        mul[i]=n*i;
    }

    for(int i=1;i<=10;i++){
        cout<<n<<" X "<< i <<" = "<<mul[i]<<endl;
    }
    
    return 0;
}