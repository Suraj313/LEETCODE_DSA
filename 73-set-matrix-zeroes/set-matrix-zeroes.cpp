class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        unordered_set<int> r;
        unordered_set<int> c;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(r.find(i)!=r.end()||c.find(j)!=c.end()){
                    matrix[i][j]=0;
                }
            }

        }
        
    }
};