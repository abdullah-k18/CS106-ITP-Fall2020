#include <iostream> //Header File
using namespace std; //Namespace

int subtraction (int a, int b) //Function Decleration, Prototype, And Definition
{
  int r; //Variable Decleration
  r=a-b; //r Variable Will Store Subtraction Of Two Numbers
  return r; //Value Returning To Main
}

int main () //Function For Execution
{
  int x=5, y=3, z; //Variable Decleration And Initialization
  z = subtraction (7,2); //Function Calling
  cout << "The first result is " << z << '\n'; //Message To Be Displayed On Console
  cout << "The second result is " << subtraction (7,2) << '\n'; /*Message To Be Displayed On The Console
                                                                  + Function Calling*/ 
  cout << "The third result is " << subtraction (x,y) << '\n'; /*Message To Be Displayed On The Console
                                                                  + Function Calling*/ 
  z= 4 + subtraction (x,y); //Function Calling 
  cout << "The fourth result is " << z << '\n'; // Message To Be Displayed On Console
}

