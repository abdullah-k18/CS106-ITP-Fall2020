#include<iostream>
#include<string>
using namespace std;
void display(string,int);
int main()
{
	string name;
	int age;
	cout<<"Enter Your Name: ";
	cin>>name;
	cout<<"Enter Your Age: ";
	cin>>age;
	display(name,age);
	return 0;
}
void display(string name,int age)
{
	for(int i=1; i<=10; i++)
	{
		cout<<"Your Name Is: "<<name<<endl;
		cout<<"Your Age Is: "<<age<<endl;
	}
}