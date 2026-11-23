class Solution {
    private:
    void func(int n,vector<int>&nums,vector<int>ds,vector<vector<int>>&ans,vector<int>&freq){
        if(ds.size()==n){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(freq[i]!=1){
                ds.push_back(nums[i]);
                freq[i]=1;
                func(n,nums,ds,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        vector<int>freq(n,0);
        func(n,nums,ds,ans,freq);
        return ans;
    }
};