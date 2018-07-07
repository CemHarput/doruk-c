//
// Created by memn on 6/22/18.
//
#include <stdio.h>
#include <math.h>

void init_pointers() {
    int a;
    a = 5;
    printf("%d\n", a);
    a = 3;
    printf("%d\n", a);
    int *p;
    p = &a;
    printf("%d\n", p);
    printf("%p\n", p);
    int x = *p;
    printf("%d\n", x);

    x = 4;
    a = 8;
    int *y = &a;
    printf("%d\n", *y);
    printf("%p\n", y);
    printf("%p\n", &a);
    printf("%d\n", x);
    y = &x;
    printf("%d\n", *y);
}

void update(int *a, int *b) {
    // Complete this function
//    a = a + b
//    b = |a - b|
    int sum = *a + *b;
    int abs;
//    int abs = *a - *b;
//    if (*a < *b) {
//        abs = -1 * abs;
//    }
//    abs = *a > *b ? *a - *b : *b - *a;
    abs = fabs(*a - *b);
    *a = sum;
    *b = abs;
}


void update_example(){

    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

}
