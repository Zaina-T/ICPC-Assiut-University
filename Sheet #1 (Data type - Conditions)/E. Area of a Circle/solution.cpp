#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double r, area;
    const double PI = 3.141592653;
    cin >> r;
    area = PI * r*r;
    cout << fixed << setprecision(9) << area << endl;
}