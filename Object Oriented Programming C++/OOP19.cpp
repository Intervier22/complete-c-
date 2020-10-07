
//   NOTE: tHIS PROGRAM IS FOR PRACTICING AMBIGUITY

#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {


        cout<<"How are you ?";
    }

};

class base2{
    public:
        void greet(){
            cout<<"Kaise ho?";
        }
};

class derieved:public base1,public base2{
    public:
    void greet(){
        base1::greet();
    }
};
int main()
{

    derieved o1;
    o1.greet();
}