#include<iostream>
using namespace std;
int main()
{
    int n, temp;
    cout<<"Enter Number of elements:";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
	{
		cout<<"Enter the number:";
        cin>>arr[i];
    }
    temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
    cout<<"Array after swapping first and last elements "<<endl;
    for(int i = 0;i<n;i++)
	{
        cout<<arr[i]<<"\t";
    }
    return 0;
    system("pause");
}