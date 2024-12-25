#include <iostream>
using namespace std;
int main()
{
    int option, num1, num2, num3, number, remainder, marks;
    float temperature;
    cout << "Enter The Numper Of Option To Be Performed(1,2,3,4):";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Enter Three Numbers:";
        cin >> num1 >> num2 >> num3;
        if (num1 > num2 && num1 > num3)
        {
            cout << num1 << " Is The Largest Number.";
        }
        if (num2 > num1 && num2 > num3)
        {
            cout << num2 << " Is The Largest Number.";
        }
        if (num3 > num1 && num3 > num2)
        {
            cout << num3 << " Is The Largest Number.";
        }
        break;
    case 2:
        cout << "Enter Any Number:";
        cin >> number;
        remainder = number % 2;
        if (remainder == 0)
        {
            cout << "The Number Entered Is An EVEN Number.";
        }
        else
        {
            cout << "The Number Entered Is An ODD Number.";
        }
        break;
    case 3:
        cout << "Enter The Temperature Of Water:";
        cin >> temperature;
        if (temperature < 0)
        {
            cout << "The Form Of Water Is Ice.";
        }
        else if (temperature > 0 && temperature < 100)
        {
            cout << "The Form Of Water Is Water.";
        }
        else
        {
            cout << "The Form Of Water Is Stream.";
        }
        break;
    case 4:
        cout << "Enter Your Marks:";
        cin >> marks;
        if (marks >= 90 && marks <= 100)
        {
            cout << "You Got Grade A";
        }
        else if (marks >= 80 && marks < 90)
        {
            cout << "You Got Grade B";
        }
        else if (marks >= 70 && marks < 80)
        {
            cout << "You Got Grade C";
        }
        else if (marks >= 60 && marks < 70)
        {
            cout << "You Got Grade D";
        }
        break;
    default:
        cout << "You Entered Wrong Option";
        break;
    }
    return 0;
    system("pause");
}