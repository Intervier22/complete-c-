/*


                        SOLVE THIS EXERCISE
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/


#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator{
    protected :
        float a , b;

        public : 
            void SimpleNumbers(){
                    cout<<"Enter the first number a"<<endl;
                    cin>>a;

                    cout<<"Enter the second number b"<<endl;
                    cin>>b;
            }


            void SimpleCalculation(void){
                    cout<<"The value  of a+b is "<<a+b<<endl;
                    cout<<"The value  of a-b is "<<a-b<<endl;
                    cout<<"The value  of a*b is "<<a*b<<endl;
                    cout<<"The value  of a/b is "<<a/b<<endl;
            }
};

class ScientificCalculator{
    protected :
        float a,b;

        public: 
            void ScientificNumber(){

                cout<<"Enter the value of a "<<endl;
                cin>>a;

                cout<<"Enter the value of b "<<endl;
                cin>>b;
            }

            void ScientifiCalculation(){
                    cout<<"The value of cos(a+b) is "<<cos((a+b))<<endl;
                    cout<<"The value of sin(a+b) is "<<sin((a+b))<<endl;
                    cout<<"The value of tan(a+b) is "<<tan((a+b))<<endl;
                    cout<<"The value of acos(a+b) is "<<acos((a+b))<<endl;
            }
};

class HybridCalculator:public SimpleCalculator,public ScientificCalculator{

};

int main(){

    HybridCalculator shubham;


    cout<<"\t\t FOR SIMPLE CLACULATOR CLASS \n\n";
    shubham.SimpleNumbers();
    shubham.SimpleCalculation();

    cout<<"\n--------------------------------------\n";

    cout<<"\t\t FOR Scientific CLACULATOR CLASS \n\n";

    shubham.ScientificNumber();

    shubham.ScientifiCalculation();
}