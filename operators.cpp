#include <iostream>
using namespace std;

int main(){

int a, b;
bool res;


//Arithmatic operators
cout << "Enter 2 no.s"<<a<<b;
//Addition
cout << "a + b" <<(a + b);
//Subtraction
cout << "a - b" <<(a - b);
//Multiplication
cout << "a * b" <<(a * b);
//Division
cout << "a / b" <<(a / b);
//Modulo
cout << "a % b" <<(a % b);

//RELATIONAL OPERATORS
// Is equal to
res = (a == b);
cout << "a == b" <<res;
// Not equal to
res = (a != b);
cout<< "result" <<res;
// Less than
res = a < b;
cout<<res;
// Greater than
res = a > b;
cout<<res;
// Less than equal to
res = a <= b;
cout<<res;
// Greater than equal to
res = a >= b;
cout<<res;


// Logical operators

// AND operator - True only if all the operands are true
res = (a == b) && (a < b);
cout << res;
// OR operator - True if at least one of the operands is true
res = (a > b) || (a < b);
cout<<res;
// NOT
res = !(a == b);
cout << res;

//Assignment operators

//= equal to
int d; 
int c = 3;

//+= equivalent to c = c + d
c += d;
cout << c;

//-= equivalent to c = c-d
c -= c -d;
cout << c;
return 0;
}