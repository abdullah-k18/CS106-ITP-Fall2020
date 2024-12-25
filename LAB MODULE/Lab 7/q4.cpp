#include <iostream>
using namespace std;
int fib(int t)
{
    if ((t == 1) || (t == 0))
    {
        return (t);
    }
    else
    {
        return (fib(t - 1) + fib(t - 2));
    }
}
int main()
{
    int t, i = 0;
    cout << "Enter the number of terms of series:";
    cin >> t;
    cout << endl
         << "Fibonnaci Series:";
    while (i < t)
    {
        cout << " " << fib(i);
        i++;
    }
    return 0;
    system("pause");
}