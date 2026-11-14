class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int Rows = matrix.size(),Cols = matrix[0].size();
        int l =0 , r = Rows*Cols -1;
        while(r>=l){
            int m = l +(r-l)/2;
            int rows = m/Cols, cols = m%Cols;
            if(target > matrix[rows][cols]){
                l = m+1;
            }
            else if ( target<matrix[rows][cols]){
                r = m-1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
