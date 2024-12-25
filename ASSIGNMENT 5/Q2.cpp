/* ASSIGNMENT NO 5
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Sir Hannan
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-2 Write a program to find the factorial of the number n by using function of factorial?
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter the number to find factorial:";
    void factorial();
    factorial();
    getch();
    return 0;
}
void factorial()
{
int fact=1,n,i;
cin>>n;
for(i=1; i<=n; i++)
{
   fact=fact*i;
}
   cout<<"Factorial of "<<n<<" is: "<<fact;
}
