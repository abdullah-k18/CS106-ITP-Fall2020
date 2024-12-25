#include <iostream>
using namespace std;
int main()
{
    float temperature;
    cout << "Enter The Temperature Of Water:" << endl;
    cin >> temperature;
    if (temperature < 0)
    {
        cout << "The Form Of Water Is Ice." << endl;
    }
    else if (temperature > 0 && temperature < 100)
    {
        cout << "he Form Of Water Is Water." << endl;
    }
    else
    {
        cout << "he Form Of Water Is Stream.";
    }
    return 0;
    system("pause");
}