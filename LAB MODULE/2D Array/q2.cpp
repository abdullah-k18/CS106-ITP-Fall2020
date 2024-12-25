#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the " << i + 1 << "," << j + 1 << " value of first Matrix: ";
            cin >> a[i][j];
        }
    }
    cout << "1st matrix becomes:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the " << i + 1 << "," << j + 1 << " value of second Matix: ";
            cin >> b[i][j];
        }
    }
    cout << "2nd matrix becomes:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "sum of matrices:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
    system("pause");
}