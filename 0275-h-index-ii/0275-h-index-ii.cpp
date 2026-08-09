class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=n-mid;
            if(citations[mid]==count){
                return count;
            }
            else if(citations[mid]<count){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return n-low;
    }
};