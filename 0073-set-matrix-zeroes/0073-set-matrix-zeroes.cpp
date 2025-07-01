class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> column;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j]==0){
                    row.push_back(i);
                    column.push_back(j);
                }
            }
        }
        for (int i = 0; i < row.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[row[i]][j]=0;
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < column.size(); j++) {
                matrix[i][column[j]]=0;
            }
        }
    }
};