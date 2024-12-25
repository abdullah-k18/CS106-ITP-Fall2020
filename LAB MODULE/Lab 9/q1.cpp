#include <iostream>
using namespace std;

int maximum(int arr[])
{
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return (max);
}
int minimum(int arr[])
{
    int min = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return (min);
}
int main()
{
    int arr[10], w;
    for (int i = 0; i < 10; i++)
    {
        cout << "element of array=";
        cin >> arr[i];
    }
    cout << "maximum num=" << maximum(arr) << endl;
    cout << "minimum num=" << minimum(arr);
    return 0;
}