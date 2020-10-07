#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);

    void printdata()
    {
        cout << "The value of a with help of constructor is " << a << " The value of with help of constructor is " << b <<"i"<<endl;
    }
};

complex ::complex()
{
    a = 5;
    b = 6;
}
int main()
{
    complex c1,c2,c3;

    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;
}