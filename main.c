#include <stdio.h>
#include "basics/pointer_examples.h"
#include "basics/string_examples.h"
#include "data-structures/arrays/dynamic_array_c.h"
#include "basics/strings-manip.h"
#include "data-structures/stacks.h"

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <math.h>
#include "hackerrank/balanced_brackets.h"
#include "data-structures/queues.h"
#include "buble-sort.h"
#include "searching.h"

int main() {
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

    return 0;
}


