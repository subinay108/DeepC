#include<stdlib.h>
#include <corecrt_math.h>

double mean(double* vector, int size){
    double s = 0;
    for(int i = 0; i < size; i++){
        s += vector[i];
    }
    return s/size;
}

double covarience(double *vector1, double *vector2, int size){
    double x_mean = mean(vector1, size);
    double y_mean = mean(vector2, size);

    double x, y, s = 0;
    for(int i = 0; i < size; i++){
        x = vector1[i];
        y = vector2[i];
        s += (x - x_mean) * (y - y_mean);
    }
    return s;
}

double variance(double *vector, int size){
    return covarience(vector, vector, size);
}

double std_deviation(double *vector, int size){
    double var = variance(vector, size);
    return sqrt(var);
}

double correlation(double *vector1, double *vector2, int size){
    double cov = covarience(vector1, vector2, size);
    double std_dev_x = std_deviation(vector1, size);
    double std_dev_y = std_deviation(vector2, size);
    return cov/(std_dev_x * std_dev_y);
}

int compare(const void *a, const void *b){
    return ( *(int*)a - *(int*)b );
}

double median(int* vector, int size){
    qsort(vector, size, sizeof(int), compare);
    if(size % 2 == 0){
        return (vector[size / 2] + vector[size / 2 + 1]) / 2;
    }else{
        return vector[size / 2];
    }
}