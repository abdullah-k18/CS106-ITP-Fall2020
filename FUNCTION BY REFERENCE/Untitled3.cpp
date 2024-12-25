#include <iostream> //Header File
using namespace std; //Namespace

int addition (int &a, int &b) //Function Decleration, Prototype, And Definition
{
  int r; //Variable Decleration
  r=a+b; //r Variable Will Store Sum Of Two Numbers
  return r; //Value Returning To Main
}

int main () //Function For Execution
{
  int z,a=3,b=5; //Variable Decleration
  z = addition (a,b); //Function Calling
  cout << "The result is " << z; //Message To Be Displayed On Console
}

