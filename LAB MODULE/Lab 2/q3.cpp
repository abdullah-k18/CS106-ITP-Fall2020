#include <iostream>
using namespace std;
int main()
{
    int number, remainder;
    cout << "Enter Any Number:";
    cin >> number;
    remainder = number % 2;
    if (remainder == 0)
    {
        cout << "The Number Is EVEN.";
    }
    else
    {
        cout << "The Number Is ODD.";
    }
    return 0;
    system("pause");
}