#include<iostream>
using namespace std;
int main()
{
	int val1=5, val2=56, val3=18;
	int *pval1, *pval2, *pval3;
	pval1=&val1;
	pval2=&val2;
	pval3=&val3;
	if(*pval1>*pval2 && *pval1>*pval3)
	{
		cout<<"pval1 is greatest. pval1="<<*pval1<<endl;
	}
	if(*pval2>*pval1 && *pval2>*pval3)
	{
		cout<<"pval2 is greatest. pval2="<<*pval2<<endl;
	}
	if(*pval3>*pval1 && *pval3>*pval2)
	{
		cout<<"pval3 is greatest. pval3="<<*pval3<<endl;
	}
	if(*pval1<*pval2 && *pval1<*pval3)
	{
		cout<<"pval1 is smallest. pval1="<<*pval1<<endl;
	}
	if(*pval2<*pval1 && *pval2<*pval3)
	{
		cout<<"pval2 is smallest. pval2="<<*pval2<<endl;
	}
	if(*pval3<*pval1 && *pval3<*pval2)
	{
		cout<<"pval3 is smallest. pval3="<<*pval3<<endl;
	}
	system("pause");
}
