#include <iostream>
#include <string>
 
using namespace std;
 
int num;
 
int main() {
    cin >> num;
    if ((num/1000) % 2 == 0)
        cout << "EVEN" << endl;
    else 
        cout << "ODD" << endl;
    
}