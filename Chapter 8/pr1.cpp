#include <iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int n;
    cout<<"Enter the element\n";
    cin>>n;

    int f = fib(n);

    cout<<"the answer is "<<f;
    return 0;
}