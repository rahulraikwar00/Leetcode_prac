class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int m = 0;
        int n = mat[0].size()-1;
        
        while(m<mat.size() && n>=0){
            if(target<mat[m][n]) n-=1;
            else if(target>mat[m][n]) m+=1;
            else return true ;
            }
        return false;   }   
};