#include <iostream>
using namespace std;
int main(){
    int math,bio,chem;
    float total;

    cout<<"Enter your Math marks\n";
    cin>>math;

    cout<<"Enter your Chemistry marks\n";
    cin>>chem;

    cout<<"Enter your biology marks\n";
    cin>>bio;
    total=(math+chem+bio)/3;

    if((total<40||bio<33||chem<33||math<33)){
        cout<<"Your percent marks are"<<total<<"%  And you are fail";
    }
    else{
        cout<<"Your percent  marks are "<<total<<"%  And you are pass";
    }

return 0;

}