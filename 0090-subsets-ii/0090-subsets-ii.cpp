class Solution {
public:
void func(int idx,vector<int>&nums,vector<vector<int>>&ans,vector<int>&st){
    ans.push_back(st);
    for(int i=idx;i<nums.size();i++){
        if(i>idx&&nums[i]==nums[i-1]){
            continue;
        }
        st.push_back(nums[i]);
        func(i+1,nums,ans,st);
        st.pop_back();
    }
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>st;
        func(0,nums,ans,st);
        return ans;
    }
};