#include <iostream>
#include <cmath>
 
using namespace std;
int a , b , c;
 
int main() {
    cin >> a >> b >> c;
    int mn = min(a, min(b,c));
    int mx = max(a , max(b,c));
    cout << mn << " " << mx<< endl;
    
}