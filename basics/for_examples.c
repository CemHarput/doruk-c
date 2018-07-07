//
// Created by Mehmet Emin Mumcu on 7.07.2018.
//

#include "for_examples.h"
#include <stdio.h>

void for_loop_c() {
    int a, b;
    char *arr[10];
    arr[0] = "zero";
    arr[1] = "one";
    arr[2] = "two";
    arr[3] = "three";
    arr[4] = "four";
    arr[5] = "five";
    arr[6] = "six";
    arr[7] = "seven";
    arr[8] = "eight";
    arr[9] = "nine";

    scanf("%d", &a);
    scanf("%d", &b);
    // Complete the code.

    for (int i = a; i < 10 && i <= b; i++) {
        printf("%s\n", arr[i]);
    }

//    for (int i = max(a, 10); b > 9 && i <= b; i++) {
//        if (i % 2 == 0)
//            printf("even\n");
//        else
//            printf("odd\n");
//    }
}
