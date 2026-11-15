class Solution {
private:
    void func(int i,int target, vector<int>a,vector<vector<int>>&ans,vector<int>&ds){
        if(i==a.size()){
            return ;
        }
            if(target==0){
                ans.push_back(ds);
                return ;
            }
        
        if(a[i]<=target){
            ds.push_back(a[i]);
            func(i,target-a[i],a,ans,ds);
            ds.pop_back();
        }
        func(i+1,target,a,ans,ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>ds;
        func(0,target,candidates,ans,ds);
        return ans;
    }
};