/* ASSIGNMENT NO 5
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Sir Hannan
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-1 Create a calculator that takes a number, a basic math operatore (+,-,*,/), and a second number all from user input, and have it print the result of the
   mathematical operation. The mathematical operations should be wrapped inside of functions.
*/
#include <iostream>
using namespace std;
int add(int,int); 
int sub(int,int);
int multiply(int,int);
int divide(int,int);
void menu();
int menuopt();
int main()
{
    int a;
    int b;
    cout<<"enter the first integer:";
    cin>>a;
    cout<<"enter the second integer:";
    cin>>b;
    int ch;
    do{
        menu();
        ch=menuopt();
        switch(ch)
        {
            case 1:
                cout<<"the sum is: "<<add(a,b);
                break;
            case 2:
                cout<<"the subtraction is: "<<sub(a,b);
                break;
            case 3:
                cout<<"the multiplication is: "<<multiply(a,b);
                break;
            case 4:
                cout<<"the division is: "<<divide(a,b);
                break;
            case 0:
                exit(0);
            default:
                cout<<"The input operation is invalid. PLease try again."<<endl;
        }
    }while(ch != 0);   
    return 0;
}
void menu()
{
    cout<<"Press 1 to add"<<endl;
    cout<<"Press 2 to subtract"<<endl;
    cout<<"Press 3 to multiply"<<endl;
    cout<<"Press 4 to divide"<<endl;
    cout<<"Press 0 to exit"<<endl;
}
int menuopt()
{
	int opr;
    cout<<"Please enter your choice";
    cin>>opr;
    return opr;
}
int add(int x, int y) 
{
    int z;
    z=x+y;
    return z;
   
}
int sub(int x, int y)
{
    int z;
    z=x-y;
    return z;
}
int multiply(int x, int y)
{
    int z;
    z=x*y;
    return z;
}
int divide(int x, int y)
{
    int z;
    z=x/y;
    return z;
}
