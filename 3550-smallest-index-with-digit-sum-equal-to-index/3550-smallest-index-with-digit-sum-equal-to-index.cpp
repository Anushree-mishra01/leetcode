class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ans=0;
            int x=nums[i];
            while(x>0){
                ans+=x%10;
                x/=10;
            }
            if(ans==i){
                sum=ans;
                break;
            }
        }
        return sum;
    }
};