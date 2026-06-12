#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            max = std::max(max, a[i]);
            min = std::min(min, a[i]);
        }
        cout << max - min + 1<< "\n";
    }
    return 0;
}