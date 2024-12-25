/* LAB 11
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Mam Aroosa
   ABASYN UNIVERSITY ISLAMABAD
   
   Task 01: use Quadratic equation to calculate the value of x, take the value of variable a, b and c from user and perform this operation using function and use
   pointer to point the address of x. */
#include<iostream>
#include<cmath>
using namespace std;
double quadraticForm(double, double, double);
int main()
{
	double a, b, c, x1=0, x2=0;
	double* ptr1=&x1;
	double* ptr2=&x2;
	cout<<"Enter Value of a:";
	cin>>a;
	cout<<"Enter Value of b:";
	cin>>b;
	cout<<"Enter Value of c:";
	cin>>c;
	quadraticForm(a, b, c);
	return 0;
}
double quadraticForm(double a, double b, double c)
{
	double x1=0;
	double x2=0;
	if (a == 0.0)
	{
		cout << "Not Posible";
	}
	else
	{
		x1=(-b + sqrt((b*b) - 4 * a*c)) / (2 * a);
		x2=(-b - sqrt((b*b) - 4 * a*c)) / (2 * a);

		cout<<"x1="<<x1<<endl;
		cout<<"X2="<<x2<<endl;
	}
	cout<<"Adress of x1="<<&x1<<endl;
	cout<<"Adress of x2="<<&x2<<endl;
}
