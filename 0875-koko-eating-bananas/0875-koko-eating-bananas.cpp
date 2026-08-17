class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int result=INT_MAX;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long ans=0;
            for(int i=0;i<n;i++){
                ans+=(piles[i]+mid-1)/mid;
            }
            if(ans<=h){
                high=mid-1;
                result=mid;
            }
            else{
                low=mid+1;
            }
        }
return result;
    }
};