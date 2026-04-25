#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> e(n + 1);
    vector<int> r(n, -1);
    
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        e[u].push_back(i);
        e[v].push_back(i);
    }
    
    int s = -1;
    for (int i = 1; i <= n; i++) {
        if (e[i].size() >= 3) {
            s = i;
            break;
        }
    }
    
    int c = 0;
    if (s != -1) {
        for (int i : e[s]) {
            r[i] = c;
            c++;
        }
    }
    
    for (int i = 1; i < n; i++) {
        if (r[i] == -1) {
            r[i] = c;
            c++;
        }
        cout << r[i] << "\n";
    }
    
    return 0;
}