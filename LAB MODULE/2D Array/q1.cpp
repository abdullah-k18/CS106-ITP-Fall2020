#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the " << i + 1 << "," << j + 1 << " value of Matrix : ";
            cin >> arr[i][j];
        }
    }
    cout << "The Matrix Is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Middle Row is: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 3 / 2)
                cout << arr[i][j] << "\t";
        }
    }
    cout << endl
         << "Middle Column is:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 3 / 2)
                cout << arr[i][j] << "\t";
        }
    }
    return 0;
    system("pause");
}