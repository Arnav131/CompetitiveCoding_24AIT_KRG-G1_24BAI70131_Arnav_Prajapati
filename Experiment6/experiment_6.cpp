#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum = 0, currentSum = 0;
        int n = nums.size();
        unordered_map<int, int> count;
        int distinctCount = 0;
        
        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
            if (++count[nums[i]] == 1) distinctCount++;
            if (i >= k) {
                int out = nums[i - k];
                currentSum -= out;
                if (--count[out] == 0) distinctCount--;
            }
            if (i >= k - 1 && distinctCount == k) {
                maxSum = max(maxSum, currentSum);
            }
        }
        
        return maxSum;
    }
};