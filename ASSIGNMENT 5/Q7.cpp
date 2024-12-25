/* ASSIGNMENT NO 5
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Sir Hannan
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-7 Define a function that returns the product of two numbers entered by user.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int multiply(int x, int y);
int main()
{
    int num1;
    int num2; 
    int product;
    cout << "Enter the first number:";
    cin>>num1;
    cout << "Enter the second number:";
    cin>>num2;
    product=multiply(num1, num2);
    cout<<"Product="<<product;
    getch();
    return 0;
}
int multiply(int x, int y)
{
	int z;
	z=x*y;
    return z;
}
