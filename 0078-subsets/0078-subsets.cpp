class Solution {
public:
    void func(int idx,vector<vector<int>>&ans,vector<int>nums,vector<int>&ds){
        ans.push_back(ds);
        for(int i=idx;i<nums.size();i++){
            ds.push_back(nums[i]);
            func(i+1,ans,nums,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        func(0,ans,nums,ds);
        return ans;
    }
};