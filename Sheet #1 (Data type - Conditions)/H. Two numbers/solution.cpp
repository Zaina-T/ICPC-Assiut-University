#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    double r = (double)a / b;
    
    cout << "floor " << a << " / " << b << " = " << floor(r) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(r) << endl;
    cout << "round " << a << " / " << b << " = " << round(r) << endl;
 
}