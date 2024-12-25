/* ASSIGNMENT NO 5
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Sir Hannan
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-5 Define a function to find out if number is prime or not.
*/
#include <iostream>
using namespace std;
void Prime(int n)
{
   int i, flag=0;
   for(i=2; i<=n/2; ++i)
   {
      if(n%i==0)
	  {
         flag=1;
         break;
      }
   }
   if(flag==0)
   {
   cout<<n<<" is a prime number"<<endl;
}
   else
   {
   cout<<n<<" is not a prime number"<<endl;
}
}
int main()
{
	int n;
	cout<<"Enter any number:";
	cin>>n;
   Prime(n);
   return 0;
   system("pause");
}
