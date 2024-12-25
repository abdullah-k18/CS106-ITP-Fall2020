#include<iostream>
using namespace std;
int main()
{
	int salary, input, bonus;
	int saletarget;
	cout << " Enter Your Salary " << "\n";
	cin >> input;
	if (input < 50000)
	{
		bonus = (input / 100) *10;
		salary = input + bonus;
		cout << "Salary after increase of 10 percent : " <<salary<<" Pkr "<< "\n";
	}
	else if (input > 50000)
	{
		bonus = (input / 100) * 5;
		salary = input + bonus;
		cout << " Salary after increase of 5 percent : " << salary<<" Pkr "<<"\n";
	}
	cout << "Enter your sale target per month to check out the performance : " << "\n";
	cin >> saletarget;
	if (saletarget > 600)    	
	{
		bonus = salary*5/100;   
		salary = salary + bonus;      
		cout << " Your performance is excellent and increase of 5 percent bonus in your salary :" << salary << "\n";
	}		
	else
	{
		if(saletarget<600)
		bonus = salary*2.5/100; 
		salary = salary + bonus;
		cout << "your performance is average and increase of 2.5 percent bonus in your salary : " << salary << "\n";	
	}
	system("pause");
	return 1;
}
