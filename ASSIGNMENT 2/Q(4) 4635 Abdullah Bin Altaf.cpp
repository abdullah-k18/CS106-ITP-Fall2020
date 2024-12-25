#include<iostream>
using namespace std;
int main()
{
	int i, j, space;
	cout << "USing For Loop:"<<endl;
	for (i = 1; i <=4; i++)
	{
		for (j = 1; j < i; j--)
		{
			cout << " ";
		}
		cout << "*"<<endl<<"**"<<endl<<"***"<<endl<<" **"<<endl<<"  *"<<endl;
		break;
	}
	cout << "USing while Loop"<<endl;
	i = 1;
	while (i <=4)
	{
		j = 1;
		while (j < i)
		{
			cout << " ";
			j--;
		}
		cout<<"*"<<endl<<"**"<<endl<<"***"<<endl<<" **"<<endl<<"  *"<<endl;
		i++;
		break;
	}
	system("pause");
	return 0;
}
