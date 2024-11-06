#include <iostream>
using namespace std;
double n;
 
int main() {
    cin >> n;
    
    int nm = (int)n;
    double dp = n - nm;
 
    if (dp == 0)
        cout << "int " << nm << endl;
    else
        cout << "float " << nm << " " << dp << endl;
 
}