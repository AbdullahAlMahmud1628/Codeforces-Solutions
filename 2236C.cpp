#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    long long a, b, x;
    cin >> a >> b >> x;

    vector<pair<long long, long long>> pathA, pathB;
    
    long long div_operations = 0;
    pathA.push_back({a, div_operations});
    while (a > 0) {
        a /= x;
        div_operations++;
        pathA.push_back({a, div_operations});
    }

    div_operations = 0;
    pathB.push_back({b, div_operations});
    while (b > 0) {
        b /= x;
        div_operations++;
        pathB.push_back({b, div_operations});
    }

    long long min_operatoins = 2e18;

    for (auto& pA : pathA) {
        for (auto& pB : pathB) {
            long long valA = pA.first;
            long long stepsA = pA.second;
            long long valB = pB.first;
            long long stepsB = pB.second;

            // Cost to bridge the gap between valA and valB using +1
            long long bridge = abs(valA - valB); 
            
            long long total_ops = stepsA + stepsB + bridge;
            min_operatoins = min(min_operatoins, total_ops);
        }
    }

    cout << min_operatoins << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}