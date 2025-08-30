#include<iostream>
#include<vector>
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

void solve()
{
    int n,k;
    cin >> n >> k;
    int quotient = k / (n - 1);
    int remainder = k % (n - 1);
    long long result = n * quotient;
    if(remainder == 0) cout << result - 1 << endl;
    else cout << result + remainder << endl;
}