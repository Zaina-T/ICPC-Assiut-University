#include <iostream>
 
using namespace std;
 
char x;
 
int main() {
    cin >> x;
 
    if(isdigit(x))
        cout <<"IS DIGIT"<< endl;
    else{
        cout <<"ALPHA"<<endl;
        if (isupper(x))
            cout <<"IS CAPITAL"<<endl;
        else
            cout << "IS SMALL" << endl;
    }
}