class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m = matrix.size();
        int n = matrix[0].size();
       int i=0,j=m*n-1; 
       while(i<=j){
        int mid = j+(i-j)/2;
        int row = mid/n, coln = mid%n;
        if(matrix[row][coln]==target){
                return true;
        }
        else if (matrix[row][coln]>target){
            j = mid-1;
        }
        else{
            i = mid+1;
        }
       }
       return false;
    }
};