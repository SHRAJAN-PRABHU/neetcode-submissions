class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       if(matrix.empty()) return false;

       int n=matrix.size();
       int m=matrix[0].size();

       int l=0,r=m*n-1;
       while(l<=r){
        int mid=l+(r-l)/2;
        int row=mid/m;
        int col=mid%m;

        if(matrix[row][col]==target){
            return true;
        }
        else if(target>matrix[row][col]){
            l=mid+1;
        }
        else r=mid-1;

       }
    return false;

    }
};
