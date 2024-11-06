#include<iostream>
using namespace std;
long long n,m;
int main()
{
    cin >> n>>m;
    int r = (n % 10) + (m%10);
    cout << r<<endl;  
}