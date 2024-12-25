/* ASSIGNMENT NO 3
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Sir Hannan
   ABASYN UNIVERSITY ISLAMABAD
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int liftLocation=rand()%4;
	int userLocation=rand()%4;
	bool button=false;
	button=true;
	int destination;
	liftLocation=userLocation;
	cin>>destination;
	liftLocation=destination;
	return 0;
	system("pause");
}
