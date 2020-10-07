#include <iostream>
using namespace std;
class base{
    
    public:
    int var_base;
     void display (){
         cout<<"Displaying base class var_base "<<var_base<<endl;
     }
};

class derieved:public base{
    public:
    int var_derieved;
        void display(){
            cout<<"Displaying base class var_base "<<var_base<<endl;
            cout<<"Displaying base class var_derieved "<<var_derieved<<endl;
        }
};
int main(){
    base *base_class_pointer;
    derieved obj_derieved;
    base obj_base;
    base_class_pointer=&obj_derieved;
    base_class_pointer->var_base=54;
    base_class_pointer->display();

    derieved *derieved_class_pointer;
    derieved_class_pointer=&obj_derieved;
    derieved_class_pointer->var_derieved=4546;
    derieved_class_pointer->display();
    /*
    if we will give base_class_pointer the address of obj_derieved
    it will run the display function of base class

    if we will give derieved_class_pointer the address of obj_derieved 
    it will run the display function of derieved class

    Note:-These are decision taken in the runtime means this runtime polymorphism
*/



    return 0;
}