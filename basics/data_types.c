//
// Created by Mehmet Emin Mumcu on 7.07.2018.
//

#include <stdio.h>
#include <string.h>
#include "data_types.h"

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
