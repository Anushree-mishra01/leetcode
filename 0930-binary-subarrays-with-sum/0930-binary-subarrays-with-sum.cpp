class Solution {
    private:
    int res(vector<int>&nums,int goal){
    int n=nums.size();
    if(goal<0){
        return 0;
    }
     int count=0,left=0,sum=0;
     for(int i=0;i<n;i++){
        sum+=nums[i];
        while(sum>goal){
            sum-=nums[left];
            left++;
        }
        count+=i-left+1;
     }
     return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
     return res(nums,goal)-res(nums,goal-1);
    }
};