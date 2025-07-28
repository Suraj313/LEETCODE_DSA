class Solution {
public:
    bool bs(vector<vector<int>>& matrix, int target,int mid,int col){
        int s=0,e=col-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(matrix[mid][m]==target) return true;
            else if(matrix[mid][m]>target){
                e=m-1;
            }
            else s=m+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int s=0,e=row-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            bool flag=bs(matrix,target,mid,col);
            if(flag) return true;
            if(matrix[mid][col-1]>target){
                e=mid-1;
            }
            else s=mid+1;
        }
    return false;   
    }
};