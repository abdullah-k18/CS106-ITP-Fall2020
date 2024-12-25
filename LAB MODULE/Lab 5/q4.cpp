#include<iostream>
using namespace std;
int main()
{
	int arr[100],n=10,i,smallestNum,largestNum;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter number:";
		cin>>arr[i];
	}
	smallestNum=arr[1];
	largestNum=arr[1];
	for(i=1;i<=n;i++)
	{
		if(arr[i]<smallestNum)
			smallestNum=arr[i];
		if(arr[i]>largestNum)
			largestNum=arr[i];
	}
	cout<<endl<<"Largest element is :"<<largestNum;
	cout<<endl<<"Smallest element is :"<<smallestNum;
	return 0;
	system("pause");
}