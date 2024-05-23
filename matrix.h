#include<stdio.h>

void matrix_multiply(int *matrix1, int *matrix2, int *result, int m, int n, int p){
    // multiply m x n and n x p matrices
    int s;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            s = 0;
            for(int k = 0; k < n; k++){
                s += matrix1[i * n + k] * matrix2[k * p + j];
            }
            result[i * m + j] = s;
        }
    }
}

void display_matrix(int *matrix, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i * n + j]);
        }
        printf("\n");
    }
}