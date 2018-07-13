//
// Created by Mehmet Emin Mumcu on 13.07.2018.
//

#include "searching.h"
#include "buble-sort.h"

int linear_search(int arr[], int size, int searching) {

    for (int i = 0; i < size; ++i) {
        if (arr[i] == searching)
            return i;
    }
    return -1;

}

int binary_search_internal(int arr[], int start, int end, int searching);

int binary_search(int arr[], int size, int searching) {
    // sort array;
    sort(arr, size);

    return binary_search_internal(arr, 0, size - 1, searching);
}

int binary_search_internal(int arr[], int start, int end, int searching) {
    if (start > end) {
        // not found
        return -1;
    }
    int middle = (end + start) / 2;
    if (arr[middle] == searching) {
        return middle;
    }
    if (arr[middle] > searching)
        return binary_search_internal(arr, start, middle, searching);
    else {
        return binary_search_internal(arr, middle + 1,end, searching);
    }
}

void searching_test() {
    int arr[] = {10, 9, 8, 7, 6};
    sort(arr, 5);
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    char *arr2[] = {"Mehmet", "Cem", "Ali", "Bora"};
    ssort(arr2, 4);
    for (int i = 0; i < 4; ++i) {
        printf("%s\n", arr2[i]);
    }

    int i = binary_search(arr, 5, 8);
    printf("%d", i);
}
