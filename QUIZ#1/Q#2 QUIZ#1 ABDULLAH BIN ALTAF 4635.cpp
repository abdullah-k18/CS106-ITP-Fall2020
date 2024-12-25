#include<iostream>
using namespace std;
int main()
{
	int smallestNumber=0, largestNumber, x, y;
	cout<<"Enter The Starting Value Of Range:";
	cin>>x;
	cout<<"Enter The Ending Value Of Range:";
	cin>>y;
	smallestNumber=x;
	cout<<"The First Smallest Number Is "<<smallestNumber;
	smallestNumber=x+1;
	cout<<"And The Second Smallest Number Is "<<smallestNumber;
	cout<<"             "<<endl;
	largestNumber=y;
	cout<<"The First Largest Number Is "<<largestNumber;
	largestNumber=y-1;
	cout<<"And The Second Largest Number Is "<<largestNumber;
	return 0;
}
