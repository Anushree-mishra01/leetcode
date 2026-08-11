class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        double ans=0;
        int m=prices.size();
        int n=discounts.size();
        int k=min(m,n);
        for(int i=0;i<k;i++){
            ans+=(double)(prices[i]*(100-discounts[i]))/100.0;
        }
        for(int i=k;i<m;i++){
            ans+=prices[i];
        }
        return ans;
    }
};