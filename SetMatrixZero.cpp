#include <bits/stdc++.h>

void markRow(vector<vector<int>> &matrix,int n, int m, int i){
	for(int j=0;j<m;j++){
		if(matrix[i][j] != 0){
			matrix[i][j]= -1;
		}
	}
}

void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    // set all non-zero elements as -1 in the col j:
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
			}
		}
	}

	// Finally, mark all -1 as 0:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

}
