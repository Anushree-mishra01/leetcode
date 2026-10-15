class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int temp = 0, left = 0;
        int ans=0,ans2=0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 != 0) {
                temp++;
            }
            while (temp > k) {
                if (nums[left] % 2 == 1) {
                    temp--;
                }
                left++;
            }

             ans += i - left + 1;
        }
        temp = 0, left = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 != 0) {
                temp++;
            }
            while (temp > k - 1) {
                if (nums[left] % 2 == 1) {
                    temp--;
                }
                left++;
            }
        ans2 += i - left + 1;
        }
        return ans - ans2;
    }
};
