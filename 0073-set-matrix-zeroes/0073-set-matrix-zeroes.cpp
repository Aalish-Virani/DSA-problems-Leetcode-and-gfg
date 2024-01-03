class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    
    vector <short> row;
    vector <short> column;
        
    for (short i=0; i<matrix.size(); i++){
            for (short j=0; j<matrix[0].size(); j++){
    
                if (matrix[i][j]==0){
                    row.push_back(i);
                    column.push_back(j);
                }
                
            }
    }

    for (short i=0; i<row.size(); i++){
        for (short j=0; j<matrix[0].size(); j++){
            matrix[row.at(i)][j] = 0;
        }
    }        

    for (short i=0; i<column.size(); i++){
        for (short j=0; j<matrix.size(); j++){
            matrix[j][column.at(i)] = 0;
        }
    }        

    }
};