#include <iostream>

int** transpose(int** matrix, unsigned int N, unsigned int M){
    int** tmatrix = new int*[M];
    for (int i = 0; i < M; ++i)
        tmatrix[i] = new int[N];
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            tmatrix[j][i] = matrix[i][j];
    return tmatrix;
}

int main(){
    return 0;
}
