#include<stdio.h>

void display_vector(int *vector, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", vector[i]);
    }
}

void dot_product(int *vector1, int *vector2, int *result, int n){
    for(int i = 0; i < n; i++){
        result[i] += vector1[i] * vector2[i];
    }
}

void scalar_multiply(int *vector, int *result, int n, int k){
    for(int i = 0; i < n; i++){
        result[i] = k * vector[i];
    }
}
