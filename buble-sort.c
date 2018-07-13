//
// Created by Mehmet Emin Mumcu on 13.07.2018.
//

#include <string.h>
#include "buble-sort.h"


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n) {

    for (int pass = 0; pass < n; ++pass) {
        for (int j = 0; j < n - 1 - pass; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

}

void sswap(char **a, char **b) {
    char tmp[200];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);

}


void ssort(char *arr[], int n) {
    for (int pass = 0; pass < n; ++pass) {
        for (int j = 0; j < n - 1 - pass; ++j) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                sswap(&arr[j], &arr[j + 1]);
            }
        }
    }
}