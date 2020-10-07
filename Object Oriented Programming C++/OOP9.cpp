#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void getdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void compnum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

    void print()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{

    complex c1, c2, c3;
    int a, b, c, d;

    cout << "Enter the first dimenson two number " << endl;
    cin >> a;
    cout << endl;
    cin >> b;

    cout << "Enter the two dimenson two numbers" << endl;
    cin >> c;
    cout << endl;
    cin >> d;

    c1.getdata(a, b);
    c2.getdata(c, d);

    c3.compnum(c1, c2);

    c3.print();
}