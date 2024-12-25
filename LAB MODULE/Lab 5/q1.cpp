#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of elements:";
    cin>>n;
    float arr[n],sum=0,avg;
    for(int i = 0;i<n;i++)
	{
		cout<<"Enter the number:";
        cin>>arr[i];
        sum = sum + arr[i];
    }
    avg= sum/n;
    cout<<endl<<"Sum="<<sum;
	cout<<endl<<"Average= "<<avg;
    return 0;
    system("pause");
}