/* QUIZ 3
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Mam Aroosa 
   ABASYN UNIVERSITY ISLAMABAD
   
   Q. Write c++ program that ask user to enter any alphabet then use switch statement to check that number is vowel or consonant.
*/
#include<iostream>
using namespace std;
int main()
{
	char alphabet;
	cout<<"Enter an Alphabet:";
	cin>>alphabet;
	switch(alphabet)
	{
		case 'a':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}
		case 'e':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}
		case 'i':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}		
		case 'o':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}
		case 'u':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}
		case 'A':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}
		case 'E':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}
		case 'I':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}		
		case 'O':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}
		case 'U':
			{
				cout<<"The alphabet entered is a vowel.";
				break;
			}		
		default:
			{
				cout<<"The alphabet entered is a constant.";
				break;
			}
	}
	return 0;
	system("pause");
}
