#include <iostream>
using namespace std;


/*

Inhertiance :

student-->test
|
|
V
sports

test--->result

sport--->result

*/
class student{
    protected:
        int rollno;

        public:

            void setrollno(int a ){
                rollno=a;
            }

            void  printroll(){
                cout<<"Your roll number is "<<rollno<<endl;
            }
};

class test:virtual public student{

    protected:
        float maths,physics;

        public:

        void setmarks(float a,float b){
            maths=a;
            physics=b;
        }

        void printmarks(){
            cout<<"Your maths marks is "
                <<maths<<endl
                <<"Your physics marks is "
                <<physics<<endl;
        }



};
class sport:virtual public student{

    protected:

    int score;
     
     public:

        void setscore(int a){
            score=a;
        }


        void printscore(){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class result:virtual public test,virtual public sport{
    private:
    float total;

    public:

        void printtotal(){
            cout<<"The total marks is "<<total<<"ot of 210 \n";
        }
    void display (){
        total=maths+physics+score;

        printroll();
        printmarks();
        printscore();
        printtotal();


    }
};
int main(){
    result shubham;
    shubham.setrollno(1);
    shubham.setmarks(99.9,100);
    shubham.setscore(9.5);

    shubham.display();
    return 0;
}