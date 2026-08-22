class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int temp=n;
        int prod=1;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            prod*=rem;
            n/=10;
        }
        return temp%(sum+prod)==0;
    }
};