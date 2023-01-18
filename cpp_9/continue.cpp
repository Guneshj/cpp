//The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
#include <iostream>
using namespace std ;
int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            cout << " "<<i;
            continue;
        }
        
        cout << "\n"<<i;
    }
    
}