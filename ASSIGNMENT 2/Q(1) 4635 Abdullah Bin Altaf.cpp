#include<iostream>
using namespace std;
int main()
{
	int n;
	n=4;
	cout<<"Using For Loop:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"Using While Loop:"<<endl;
	int i=0, j=0;
	while(i<n)
	{
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		j=0;
		i++;
		cout<<endl;
	}
	return 0;
	system("pause");
}
