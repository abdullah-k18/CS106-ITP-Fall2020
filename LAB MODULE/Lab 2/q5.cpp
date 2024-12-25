#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter Any Number Between The Range 50-500:";
    cin >> number;
    if (number >= 50 && number <= 500)
    {
        cout << "Correct Input";
    }
    else
    {
        cout << "Congratulations, your input is valid.";
    }
    return 0;
    system("pause");
}