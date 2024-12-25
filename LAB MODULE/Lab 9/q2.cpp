#include<iostream>
using namespace std;
int main()
{
	int A, B;
	cout<<"Enter the value of A:";
	cin>>A;
	cout<<"Enter the value of B:";
	cin>>B;
	cout<<"A="<<A<<endl;
	cout<<"B="<<B<<endl;
	swap(A,B);
	cout<<"After swapping:"<<endl;
	cout<<"A="<<A<<" and "<<"B="<<B;
	return 0;
	system("pause");
}