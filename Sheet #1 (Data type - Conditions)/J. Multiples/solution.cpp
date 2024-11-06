#include <iostream>
 
using namespace std;
 
int a,b;
 
int main()
{
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
        cout << "Multiples" << endl;
    else
        cout << "No Multiples"<< endl;
    
}