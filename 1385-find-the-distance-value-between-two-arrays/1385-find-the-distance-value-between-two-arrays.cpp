class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        sort(arr1.begin(),arr1.end());
        int i=0,j=0,count=0;
        while(i<arr1.size()){
            while(j<arr2.size() && arr2[j]<arr1[i]-d){
                j++;
            }
            if(j==arr2.size()||arr2[j]>arr1[i]+d){
                count++;
            }
            i++;
        }
        return count;
    }
};