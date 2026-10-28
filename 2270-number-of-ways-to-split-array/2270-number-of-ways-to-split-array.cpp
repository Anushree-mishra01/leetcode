class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        long long sum=0,temp=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n-1;i++){
           sum-=nums[i];
            temp+=nums[i];
            if(temp>=sum){
                count++;
            }
        }
        return count;
    }
};