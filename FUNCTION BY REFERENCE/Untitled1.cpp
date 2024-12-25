#include <iostream> //Header File
using namespace std; //Namespace

void swap(int*, int*); //Function Decleration And Prototype

int main() //Function For Execution
{

    int a = 1, b = 2; //Variable Decleration And Initialization

    cout << "a = " << a << endl; //Value Of a Before Swapping Values
    cout << "b = " << b << endl; //Value Of b Before Swapping Values

    swap(&a, &b); //Function Calling

    cout << "a = " << a << endl; //Value Of a After Swapping Values
    cout << "b = " << b << endl; //Value Of b After Swapping Values
    return 0; //Value Returning
}

void swap(int* n1, int* n2) { //Function Definition
    int temp; //Variable Decleration
    temp = *n1; //Assigning The Value Of n1 To temp
    *n1 = *n2; //Asigning The Value Of n1 To n2
    *n2 = temp; //Assigning The Value Of n2 To temp
}

