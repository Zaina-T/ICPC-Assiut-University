//In this solution, I use a for loop.
#include<iostream>
using namespace std;
 
long long n,s;
int main()
{
    cin >> n;
    for (int i = 1; i <=n; i++){
        s += i;
    }
    cout << s;
}