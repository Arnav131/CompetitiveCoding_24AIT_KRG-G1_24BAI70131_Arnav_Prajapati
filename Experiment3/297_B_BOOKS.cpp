# include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int l = 0, s = 0, m = 0;
    
    for (int r = 0; r < n; r++) {
        s += a[r];
        
        while (s > t) {
            s -= a[l];
            l++;
        }
        
        m = max(m, r - l + 1);
    }
    
    cout << m << "\n";
    
    return 0;
}