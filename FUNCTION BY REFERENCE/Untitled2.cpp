#include<iostream> //Header File
using namespace std; //Namespace
void func1(int numVal) { //Function Decleration And Prototype
}

void func2(int &numRef) { //Function Decleration And Prototype
}

int main() { //Function For Execution
    int num = 5; //Variable Decleration And Initialization

        func1(num); //Function Calling

    func2(num); //Function Calling

    return 0; //Value Returning
}

