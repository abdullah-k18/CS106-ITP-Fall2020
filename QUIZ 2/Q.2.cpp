/* QUIZ NO 02
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Mam Aroosa
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-2 You have an array of size six with the following binary values 1,0,1,1,1,0 . Write  C++ code  that point to the adddress of the indexes of array which have
   value 1 */
#include<iostream>
using namespace std;
int main()
{
	int a[6]={1, 0, 1, 1, 1, 0};
	int *ptr;
	cout<<"&a[1]="<<&a[1]<<endl;
	cout<<"&a[3]="<<&a[3]<<endl;
	cout<<"&a[4]="<<&a[4]<<endl;
	cout<<"&a[5]="<<&a[5]<<endl;
}
