#include <iostream>
using namespace std;

int max(int a, int b)
// max is a function
{
    if (a < b)
    {
        cout << "MAX IS "<< b;
    }
    else {
        cout << "Enter a Max no";
    }
    
    
}
int main(){
    int x = 10;
    int y = 70;

    int m = max (x, y);

    cout << "Max is " << m << "\n";
    return 0; 
}

/* A function is a set of statements that take inputs, do some specific computation, and produce output.
Functions help us in reducing code redundancy.

A function declaration tells the compiler about the number of parameters function takes data-types of parameters, and returns the type of function.*/