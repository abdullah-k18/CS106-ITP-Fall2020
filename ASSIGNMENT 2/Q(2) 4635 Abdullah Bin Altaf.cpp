#include<iostream>
using namespace std;
int main()
{
	int i, j, rows, space;
	rows=4;
	cout<<"Using For Loop:"<<endl;
	for(i=1; i<=rows; i++)
	{
		for(space=i; space<rows; space++)
		{
			cout<<" ";
		}
		for(j=1; j<=(i); j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<"Using While Loop:"<<endl;
		i = 1;
	while (i <= 4)
	{
		for (int j = 5; j >= 1; j--)


		if (i >= j)
		{
			cout << " *";
		}

		else
		{
			cout << " ";

		}
		cout << endl;
		i++;
	}
	return 0;
	system("pause");
}
