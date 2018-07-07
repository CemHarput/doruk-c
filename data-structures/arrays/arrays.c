//
// Created by Mehmet Emin Mumcu on 7.07.2018.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arrays.h"

void print_array(int row, int col, int *const *arr) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%3d ", *(*(arr + i) + j));
        printf("\n");
    }
}

void double_array_multiple_dimension() {
    int row = 4, col = 3, i, j, count;
    int **arr = (int **) malloc(row * sizeof(int *));
    for (i = 0; i < row; i++)
        arr[i] = (int *) malloc(col * sizeof(int));
    count = 0;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            *(*(arr + i) + j) = count++;
    print_array(row, col, arr);
    free(arr);
}

void double_array_single_dimension() {
    int row = 4, col = 3;
    int *arr = (int *) malloc(row * col * sizeof(int));
    int i, j, count = 0;

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            *(arr + i * col + j) = ++count;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%3d ", *(arr + i * col + j));
        printf("\n");
    }
    free(arr);
}


void digit_frequencies() {
    char input[100];
    scanf("%s", input);

    int frequencies[10];
    for (int i = 0; i < strlen(input); i++) {
        //0=48 , 9=57
        int c = input[i] - 48;
        if (c >= 0 && c < 10) {
            frequencies[c]++;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", frequencies[i]);
    }
}

