#include <iostream>
using namespace std;

int main()
{
    int n, f = 1;

    cout << "Enter the number which you want the factrial of\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << "The factorial is   "<<f;
}
