/* ASSIGNMENT NO 5
   Submitted by: Abdullah Bin Altaf
   Reg. No: 4635;
   Course: Introduction to Programming (CS106)
   Department: CS (1st Sem)
   Submitted to: Sir Hannan
   ABASYN UNIVERSITY ISLAMABAD
   
   Q-3 Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
*/
#include <iostream>
using namespace std;
float areaOfCircle(float radiusCircle);
float findCircum(float);
int main()
{
	float radius;
	cout<<"Enter the radius of circle: ";
	cin>>radius;
	cout<<"Area of circle="<<areaOfCircle(radius)<<endl;
	cout<<"Circumference of Circle="<<findCircum(radius)<<endl;
	system("pause");
	return 0;
}
float areaOfCircle(float radiusCircle)
{
	float areaCircle;
	areaCircle=3.14*radiusCircle*radiusCircle;
	return areaCircle;
}
float findCircum(float radiusCircle)
{
	float Circum;
	Circum=2*3.14*radiusCircle;
    return (Circum);
}
