#include<iostream>
using namespace std;
int main()
{
	int val;
	int *pval;
	cout<<"Enter The Number:";
	cin>>val;
	pval=&val;
	cout<<"Adress of pval:"<<pval<<endl;
	system("pause");
}
