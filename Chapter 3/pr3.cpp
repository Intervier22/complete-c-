#include<iostream>
using namespace std;

int main(){
    // 97-122 = a-z ASCII Values
    char ch;
    cout<<"Enter the character\n";
    cin>>ch;
    if(ch<=122 && ch>=97){
        cout<<"It is lowercase";
    }
    else{
        cout<<"It is Uppercase";
    }
    return 0;
}