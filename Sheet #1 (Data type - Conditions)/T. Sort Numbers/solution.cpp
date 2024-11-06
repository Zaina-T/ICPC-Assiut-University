#include <iostream>
#include <algorithm>

using namespace std;

int a , b , c;

int main() {
    cin >> a >> b >> c;

    int arr[] = {a , b , c};
    sort(arr , arr + 3);

    for ( int i = 0; i < 3; i++){
        cout << arr[i] << endl;
    }
    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

}