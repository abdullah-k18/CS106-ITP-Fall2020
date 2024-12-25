#include <iostream> //Header File
using namespace std; //Namespace

void duplicate (int& a, int& b, int& c) //Function Decleration, Prototype, And Definition
{
  a*=2; //Variable Initialization
  b*=2; //Variable Initialization
  c*=2; //Variable Initialization
}

int main () //Function For Execution
{
  int x=1, y=3, z=7; //Variable Decleration And Initialization
  duplicate (x, y, z); //Function Calling
  cout << "x=" << x << ", y=" << y << ", z=" << z; //Message To Be Displayed On Console
  return 0; //Value Returning
}

