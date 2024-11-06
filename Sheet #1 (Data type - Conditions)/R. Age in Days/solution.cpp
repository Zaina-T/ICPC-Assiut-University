#include <iostream>
#include <string>
using namespace std;
int n;
int main() {
    cin >> n;
    int y = n / 365;
    n %= 365;
    int m = n / 30;
    n %= 30;
    int d = n;
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
}