#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], mult[3][3], i, j, k;
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
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
        {
            mult[i][j] = 0;
        }
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            for (k = 0; k < 3; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    cout << endl
         << "Output Matrix: " << endl;
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
        {
            cout << " " << mult[i][j] << "\t";
            if (j == 3 - 1)
                cout << endl;
        }
    return 0;
    system("pause");
}