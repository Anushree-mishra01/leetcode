class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int>ans={-1,-1};
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(i != j && nums[i] + nums[j] == target &&nums[i] > nums[j]){
                    int prod=nums[i]*nums[j];
                    if(prod>maxi){
                        maxi=prod;
                        ans={i,j};
                    }
                }
            }
        }
        return ans;
    }
};