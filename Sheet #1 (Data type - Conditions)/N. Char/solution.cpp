#include <iostream>
using namespace std;
 
char x;
int main() {
 
    cin >> x;
 
    if (isupper(x))
        cout << char(tolower(x)) << endl;
    else
       cout << char(toupper(x)) << endl;
}