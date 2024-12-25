#include<iostream>
using namespace std;
int main()
{
	int s, i, j;
	cout<<"Using For Loop:"<<endl;
	for(i = 1; i <= 4; i++)
	{
		for (s = 4; s > i; s--)
			cout << " ";
		for (j = 0; j<i; j++)
			cout << "* ";
		cout<<endl;
	}
	for(i = 1; i < 4; i++)
	{
		for(s = 0; s < i; s++)
			cout << " ";
		for(j = 4; j > i; j--)
			cout<< "* ";
		cout<<endl;
	}
	cout<<"Using while Loop:"<<endl;
	i = 1;
	while(i <= 4)
	{
		s = 4;
		while (s > i)
		{
			cout << " ";
			s--;
		}
		j = 0;
		while (j < i)
		{
			cout << "* ";
			j++;
		}
		cout << "\n";
		i++;
	}
	i = 1;
	while (i < 4)
	{
		s = 0;
		while (s < i)
		{
			cout << " ";
			s++;
		}
		j = 4;
		while (j > i)
		{
			cout << "* ";
			j--;
		}
		cout << "\n";
		i++;
	}
	system("pause");
	return 0;
}
