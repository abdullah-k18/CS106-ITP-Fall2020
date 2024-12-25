#include<iostream>
using namespace std;
int main()
{
	char character;
	cout<<"Enter Any Character:";
	cin>>character;
	if(character>=65 && character<=90 || character>=97 && character<=122)
	{
		if(character>=65 && character<=90)
		{
			cout<<"The Entered Character Is A CAPITAL Letter";
		}
		if(character>=97 && character<=122)
		{
			cout<<"The Entered Character Is A SMALL Letter";
		}
	}
	else
	{
		cout<<"Worng Input";
	}
		return 0;
		system("pause");
}