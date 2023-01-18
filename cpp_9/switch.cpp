#include <iostream>
using namespace std;
 int main(){
    int a;
    cout << "Choose any day " <<a;
    switch (a)
    {
    case 1:
        cout << "Work DAY";
        break;// The break statement can used to jump out of a loop.
    case 2:
        cout << "Another Work Day";
        break;
    case 3:
        cout << "Holiday";
        break;
    case 4: 
        cout << "RIDE day";
        break;
    
    default:
        break;
    }
 }