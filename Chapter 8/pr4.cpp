#include <iostream>
using namespace std;
float temp(float c){
    float f=(c*9/5)+32;
    return f;

}

int main(){
    float c;
    cout<<"The temprature in degree celcius us ";
    cin>>c;
    float f=temp(c);

    cout<<f;
    return 0;
}