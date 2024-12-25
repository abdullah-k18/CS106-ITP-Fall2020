/* ASSIGNMENT NO 5
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Sir Hannan
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-6 Write a program to print the sum of two numbers entered by user by defining your own function.
*/
#include <iostream>
using namespace std;
int addition(int a,int b);
int main()
{
	int num1;	
	int num2;	
	int add;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	add=addition(num1,num2);
	cout<<"Sum="<<add<<endl;
	return 0;
}
int addition(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
