class Solution {
private:
    void func(int idx, int target, vector<int> a, vector<vector<int>>&ans,
              vector<int>& ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        for (int i = idx; i < a.size(); i++) {
            if (a[i] > target) {
                break;
            }
            if (i>idx&&a[i - 1] == a[i]) {
                continue;
            }
            ds.push_back(a[i]);
            func(i+1, target - a[i], a, ans, ds);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        func(0, target, candidates, ans, ds);
        return ans;
    }
};