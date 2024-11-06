#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    int a, b;
    char op;
 
    getline(cin, s);
    sscanf(s.c_str(), "%d %c %d", &a, &op, &b);
 
    switch (op) {
        case '+':
             cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;    
    }
}