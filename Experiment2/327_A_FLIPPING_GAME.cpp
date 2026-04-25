#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    
    int c = 0;
    int g = 0;
    int m = -1; 
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) {
            c++;
            g--;
        } else {
            g++;
        }

        if (g > m) {
            m = g;
        }
        if (g < 0) {
            g = 0;
        }
    }
    
    cout << c + m << "\n";
    return 0;
}