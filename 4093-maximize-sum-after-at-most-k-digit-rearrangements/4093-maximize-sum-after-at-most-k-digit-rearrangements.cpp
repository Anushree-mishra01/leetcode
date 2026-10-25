class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            string s=to_string(nums[i]);
            sort(s.rbegin(),s.rend());
            int num=stoi(s);
            ans.push_back(num-nums[i]);
        }
        sort(ans.rbegin(),ans.rend());
        for(int i=0;i<k;i++){
            sum+=ans[i];
        }
        return sum;
    }
};