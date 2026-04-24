#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long A = a, B = b;
        long long mod = 1e9 + 7;
        
        // Calculate Least Common Multiple
        long long lcm = (A * B) / std::gcd(A, B);
        
        long long left = min(A, B);
        long long right = (long long)n * min(A, B);
        long long ans = left;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            
            // Inclusion-Exclusion Principle
            long long count = (mid / A) + (mid / B) - (mid / lcm);
            
            if (count >= n) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return ans % mod;
    }
};