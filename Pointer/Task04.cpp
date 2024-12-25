#include<iostream>
using namespace std;
void output(int *val)
{
	cout<<"*val="<<*val<<endl;
}
int main()
{
	int a;
	cout<<"Enter The Number:";
	cin>>a;
	output(&a);
	system("pause");
}
