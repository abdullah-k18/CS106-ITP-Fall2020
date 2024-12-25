#include <iostream>
using namespace std;
int main()
{
    int i, j, arr[15][12];

    cout << "Enter The Rent for" << endl;
    for (i = 0; i < 12; i++)
    {
        cout << "Month " << i + 1 << " : ";
        cin >> arr[0][i];
    }
    cout << "Enter the Electric cost for " << endl;
    for (i = 0; i < 12; i++)
    {
        cout << "Month " << i + 1 << " : ";
        cin >> arr[1][i];
    }
    cout << "Enter the Gas cost for " << endl;
    for (i = 0; i < 12; i++)
    {
        cout << "Month " << i + 1 << " : ";
        cin >> arr[2][i];
    }
    for (i = 0; i < 12; i++)
    { // this loop use for total
        arr[3][i] = arr[0][i] + arr[1][i] + arr[2][i];
    }

    for (i = 0; i < 12; i++)
    {
        cout << "month" << i + 1 << "\t";
    }
    cout << endl;
    for (i = 0; i < 12; i++)
    {
        cout << "rent\t";
    }
    cout << endl;
    for (i = 0; i < 12; i++)
    {
        cout << arr[0][i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 12; i++)
    {
        cout << "ElecBL\t";
    }
    cout << endl;
    for (i = 0; i < 12; i++)
    {
        cout << arr[1][i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 12; i++)
    {
        cout << "GasBL\t";
    }
    cout << endl;
    for (i = 0; i < 12; i++)
    {
        cout << arr[2][i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 12; i++)
    {
        cout << "Total\t";
    }
    cout << endl;
    for (i = 0; i < 12; i++)
    {
        cout << arr[3][i] << "\t";
    }
    return 0;
    system("pause");
}