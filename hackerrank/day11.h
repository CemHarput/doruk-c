//
// Created by memn on 7/2/18.
//

#ifndef DORUK_DAY11_H
#define DORUK_DAY11_H


#include <stdio.h>

void day11() {
    int arr[6][6];
    int sum = 0;
    int h = 0;
    // fill array
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // check
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // check condition
            int temp = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
                       + arr[i + 1][j + 1] +
                       arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (temp > sum) {
                sum = temp;
            }
        }
    }
    printf("%d", sum);

}

#endif //DORUK_DAY11_H
