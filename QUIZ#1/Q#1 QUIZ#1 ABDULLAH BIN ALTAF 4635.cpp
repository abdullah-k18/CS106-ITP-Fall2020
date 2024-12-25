#include<iostream>
using namespace std;
int main() 
{
	long int a, num=1,factorial=1;
	cout<<"x=";
	for (long int a=1;a>num;a++) 
	{
		factorial=1;
	}
	cout<<"1/"<<factorial<<"+";
	for(long int j=num+1;j>num;j++)
	{
		factorial=factorial*j;
		cout<<"1/"<<factorial<<"+";
	}
	return 0;
	system("pause");
}
