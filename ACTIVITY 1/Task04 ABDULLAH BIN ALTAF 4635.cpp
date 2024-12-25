#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter Any Number:";
	cin>>number;
	switch(number%5==0 && number%11==0)
	{
		case 1:
		{
			if(number%5==0)
			{
				cout<<"The Number Is Divisible By 5.";
			}
		}
		case 2:
		{
			if(number%11==0)
			{
				cout<<"The Number Is Divisible By 11.";
			}
		}
			default:
			{
			if(number%5!=0 | number%11!=0)
			{
				cout<<"The number is not divisible by 5 and 11.";
		}
			}
		return 0;
		system("pause");
	}
}
