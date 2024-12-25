/* LAB 11
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Mam Aroosa
   ABASYN UNIVERSITY ISLAMABAD
   
   Task 02:
   Array 01 = {5, 6, 8, 9, 3}
   Array 02 = {3, 6, 6, 6, 1}
   Step 01: Apply difference operation on array 1 and 2 then store the result of arrays in resultant array.
   Step 02: use pointers to point all those elements of resultant array having even values. */
#include<iostream>
using namespace std;
int main()
{
	int arr1[5]={5, 6, 8, 9, 3};
	int arr2[5]={3, 6, 6, 6, 1};
	int arr3[5];
	int i;
	int* ptr=&i;
	for(int i=0; i<5; i++)
	{
		arr3[i]=arr1[i]-arr2[i];
	}
	cout<<"arr1-arr2= {"<<arr3[0]<<", "<<arr3[1]<<", "<<arr3[2]<<", "<<arr3[3]<<", "<<arr3[4]<<"}"<<endl;
	for(int i=0; i<5; i++)
	{
		if(arr3[i]%2==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
	system("pause");
}
