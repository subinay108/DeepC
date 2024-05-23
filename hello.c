#include<stdio.h>
#include "stats.h"

int main(){
    double v[5] = {2, 3, 1, 5, 4};
    double m;
    m = mean(v, 5);
    printf("Mean: %f", m);
}

