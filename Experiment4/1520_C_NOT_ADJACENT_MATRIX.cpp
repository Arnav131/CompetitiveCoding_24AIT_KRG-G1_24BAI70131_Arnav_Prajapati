#include<bits\stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    if (n == 2) {
        cout << -1 << endl;
        return;
    }
    vector<int> res;
    for (int i = 1; i <= n * n; i += 2) res.push_back(i);
    for (int i = 2; i <= n * n; i += 2) res.push_back(i);

    for (int i = 0; i < n * n; i++) {
        cout << res[i] << (i % n == n - 1 ? "\n" : " ");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}