#include<iostream>
using namespace std;
int main()
{
    int n, temp;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++)
    {
    	cout<<"Enter the number:";
        cin>>arr[i];
    }
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<endl<<"Elements of the array after reverse:"<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<"\t";
    return 0;
    system("pause");
}