#include<iostream>
using namespace std;
int main()
{
	int a, b, product=0, difference=0;
	cout<<"Enter First Number:";
	cin>>a;
	cout<<endl;
	cout<<"Enter Second Number:";
	cin>>b;
	cout<<endl;
	for(int i=0;i<b;i++)
	{
		product=product+a;
	}
	cout<<"Product="<<product;
	for(int j=0;j<a;j++)
	{
		a=a-b;;
		difference=difference+1;
	}
	cout<<"Difference="<<difference;
	return 0;
	system("pause");
}