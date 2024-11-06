#include <iostream>
#include <iomanip>
 
 
using namespace std;
 
int main() {
    int integer;
    long long longInteger;
    char character;
    float floatingPoint;
    double doublePrecision;
 
    cin >> integer >> longInteger >> character >> floatingPoint >> doublePrecision;
 
    cout << integer << endl;
    cout << longInteger << endl;
    cout << character << endl;
    cout << fixed << setprecision(6) << floatingPoint << endl; 
    cout << doublePrecision << endl;
 
}