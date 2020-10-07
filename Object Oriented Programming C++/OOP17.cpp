#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int inp);
};
void student::set_roll_number(int inp)
{
    roll_number = inp;
}

class marks : public student
{
protected:
    float maths;
    float physics;

public:
    void get_marks(float m1, float m3);
};

void marks::get_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

class result : public marks
{
    
       public:

        void display(){
            cout<<"For roll no "<<roll_number<<endl;
            cout<<"The percentage is "<<(maths+physics)/2<<endl;
        }

};
int main()
{
    result shubham;
    shubham.set_roll_number(450);
    shubham.get_marks(99.0,100);
    shubham.display();
    
    return 0;
}