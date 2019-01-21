//
// Created by xieyang on 19-1-21.
//

#include "coding_interview.h"

bool FindInPartiallySortedMatrix(vector<vector<int>> & matrix, int number){
    if(matrix.size() == 0 || matrix[0].size() == 0) return false;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int currRow = 0, currCol = cols - 1;
    while(currRow < rows && currCol >= 0){
        if(matrix[currRow][currCol] == number) return true;
        else if(matrix[currRow][currCol] > number) currCol--;
        else currRow++;
    }
    return false;
}

int main(){
    vector<vector<int>> mat = {{1,2,8,9},
                               {2,4,9,12},
                               {4,7,10,13},
                               {6,8,11,15}};
    for(auto row : mat)
        for(auto i : row)
            cout << FindInPartiallySortedMatrix(mat, i) << endl;

    cout << FindInPartiallySortedMatrix(mat, 0) << endl;
    cout << FindInPartiallySortedMatrix(mat, 16) << endl;
    cout << FindInPartiallySortedMatrix(mat, 3) << endl;
    return 0;
}