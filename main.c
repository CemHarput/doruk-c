#include <stdio.h>
#include "pointer_examples.h"
#include "string_examples.h"

#include <string.h>
#include <math.h>
#include <stdlib.h>

void data_types();

void digit_frequencies();

void hesapla();

void double_array_single_dimension();

void double_array_multiple_dimension();

void print_array(int row, int col, int *const *arr);

#define SIZE 10

int main() {

//    update_example();
//    string_example_comparison();
//    string_example_2();
//    data_types();
//    digit_frequencies();

//    double_array_single_dimension();
    double_array_multiple_dimension();

    return 0;
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

void print_array(int row, int col, int *const *arr) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%3d ", *(*(arr + i) + j));
        printf("\n");
    }
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

void data_types() {
    printf("\n");
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    char s2[40] = "";

    scanf("%d", &i2);
    scanf("%lf", &d2);
    strcat(s2, s);

    char temp;
    for (scanf("%c", &temp); temp != '\n'; scanf("%c", &temp)) {
        strcat(s2, (const char *) temp);
    }

    printf("%d\n", i + i2);
    printf("%.1f\n", d + d2);
    printf("%s", s2);
}

