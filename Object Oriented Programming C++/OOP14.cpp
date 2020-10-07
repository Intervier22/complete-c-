#include <iostream>
using namespace std;
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"This is the time when counsturctor is called for object number "<<count<<endl;

        }

        ~num(){
            cout<<"THis is the time when destructor is called for object number "<<count<<endl;
            count--;
        }

};
int main(){

    cout<<"In the main function\n";
    cout<<"Creating first object\n";
    num n1;
    {
        cout<<"Entering the block\n";
        cout<<"Creating the second object\n";
        num n2;
        cout<<"Creating the third object\n";
        num n3;
        cout<<"Exiting the block\n";
    }
    cout<<"EXiting the main\n";
    return 0;
}