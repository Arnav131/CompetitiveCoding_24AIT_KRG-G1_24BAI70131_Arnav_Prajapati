#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, a;
        cin >> n;
        
        int k = 0;
        bool f = true;
        
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a == 1 && f) {
                k++;
            } else {
                f = false;
            }
        }    
        if (k == n) {
            if (k % 2 != 0) cout << "First\n";
            else cout << "Second\n";
        } else {
            if (k % 2 == 0) cout << "First\n";
            else cout << "Second\n";
        }
    }   
    return 0;
}