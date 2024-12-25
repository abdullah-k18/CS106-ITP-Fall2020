#include <iostream>
using namespace std;
int maximum(int num1, int num2);
int minimum(int num1, int num2);
int main()
{
    int num1, num2, max, min;
	cout<<"Enter the first number:";
	cin>>num1;
	cout<<"Enter the second number:";
	cin>>num2;
	max=maximum(num1, num2);
	cout<<"The greater number is:"<<max;
	min=minimum(num1, num2);
	cout<<endl<<"The smaller number is:"<<min;
	cout<<endl<<"In this case "<<max<<" is greater and "<<min<<" is smaller.";
    return 0;
    system("pause");
}
int maximum(int num1, int num2)
{
	int result;
	if(num1>num2)
	{
		result=num1;
	}
	else
	{
		result=num2;
	}
	return result;
}
	int minimum(int num1, int num2)
	{
		int result1;
		if(num1<num2)
		{
			result1=num1;
		}
		else
		{
			result1=num2;
		}
		return result1;
	}