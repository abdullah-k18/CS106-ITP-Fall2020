#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    for (int i = 1; i >= 1; i++)
    {
        if (number % 2 == 0)
        {
            cout << number << " is even.";
        }
        else
        {
            cout << number << " is odd.";
        }
    }
    return 0;
    exit(0);
    system("pause");
}