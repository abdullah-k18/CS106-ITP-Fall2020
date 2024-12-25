/* ASSIGNMENT NO 5
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Sir Hannan
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-4 A person is eligible to vite if his/her age is greater than or equal to 18. Define a function to find out if he/she is eligible to vote.
*/
#include <iostream>
using namespace std;
void Eligible(int n)
{
   if(n>=18)
   {
   cout<<"The Person Is Eligible To Vote."<<endl;
}
   else
   {
   cout<<"The Person Is Not Eligible To Vote."<<endl;
}
}
int main()
{
	int n;
	cout<<"Enter The Age Of Person:";
	cin>>n;
   Eligible(n);
   return 0;
   system("pause");
}
