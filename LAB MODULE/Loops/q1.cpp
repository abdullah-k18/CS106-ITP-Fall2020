#include <iostream>
using namespace std;
int main()
{
    int size = 6, firstNumber = 1, secondNumber = 1, nextNumber = 0;
    cout << firstNumber << " ";
    cout << secondNumber << " ";
    for (int i = 1; i < size; i++)
    {
        nextNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = nextNumber;
        cout << nextNumber << " ";
        continue;
    }
    return 0;
    system("pause");
}