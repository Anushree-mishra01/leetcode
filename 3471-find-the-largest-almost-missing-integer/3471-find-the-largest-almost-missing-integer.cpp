class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }
        unordered_map<int, int> map;
        for (int x : nums) {
            map[x]++;
        }
        int ans = -1;
        if (k == 1) {
            for (auto& [num, count] : map) {
                if (count == 1) {
                    ans = max(ans, num);
                }
            }
            return ans;
        }
        if(map[nums[0]]==1){
            ans=max(ans,nums[0]);
        }
        if(map[nums[n-1]]==1){
            ans=max(ans,nums[n-1]);
        }
        return ans;
    }
};