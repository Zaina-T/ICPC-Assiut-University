#include <iostream>
using namespace std;
 
int l1,r1,l2,r2;
 
int main() {
    cin >> l1 >> r1 >> l2 >> r2;
    
    if(r1 < l2 or r2 < l1){
        cout << -1 << endl;
    }
    else {
        cout << max(l1, l2) << " " << min(r1, r2) << endl;
    }
 
 
}