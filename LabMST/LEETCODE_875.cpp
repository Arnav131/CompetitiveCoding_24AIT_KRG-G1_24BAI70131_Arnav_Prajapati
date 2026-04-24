class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i =1;
        int j = *max_element(piles.begin(),piles.end());

        while(i<=j){
            int mid = (i+j)/2;

            long long hr=0;
            for(auto p:piles){
                hr=hr+(p+mid-1)/mid;
            }
            if(hr<=h){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};