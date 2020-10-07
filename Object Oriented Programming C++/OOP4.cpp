#include <iostream>
using namespace std;
class emp
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the id of employee " << count << endl;
        cin >> id;
    }
    void getdata()
    {
        cout << "The id of employee " << count << " is " << id;
    }
};
int emp::count;
int main()
{
    emp shubham, aditya, pranav;

    shubham.setdata();
    shubham.getdata();

    aditya.setdata();
    aditya.getdata();

    pranav.setdata();
    pranav.getdata();
    return 0;
}