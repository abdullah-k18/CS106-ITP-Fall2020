#include<iostream>
using namespace std;
int main()
{
	int obtainedMarks, totalMarks;
	float percentage;
	cout<<"Enter Total Marks:";
	cin>>totalMarks;
	cout<<"Enter Obtained Marks:";
	cin>>obtainedMarks;
	percentage=(obtainedMarks*100)/totalMarks;
	cout<<"Percentage="<<percentage<<endl;
		if(percentage<=100 && percentage>=90)
	{
		cout<<"You've got GRADE 'A+'.";
	}
	else if(percentage<90 && percentage>=80)
	{
		cout<<"You've got GRADE'A'.";
	}
	else if(percentage<80 && percentage>=70)
	{
		cout<<"You've got GRADE'B'.";
	}
	else if(percentage<70 && percentage>=60)
	{
		cout<<"You've got GRADE 'C'.";
	}
	else if(percentage<60 && percentage>=50)
	{
		cout<<"You've got GRADE'D'.";
	}
	else if(percentage<50 && percentage>=40)
	{
		cout<<"You've got GRADE 'E'.";
	}
	else
	{
		cout<<"You're FAIL.";
	}
	return 0;
	system("pause");
}
