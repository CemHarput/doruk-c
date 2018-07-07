//
// Created by memn on 7/6/18.
//

#include "balanced_brackets.h"
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../data-structures/stacks.h"

char *readline();

bool isEmpty(stack *s) {
    return s->top == 0;
}


// Complete the isBalanced function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
char *isBalanced(char *s) {

    stack stck;
    init(&stck);
    for (int i = 0; i < strlen(s); i++) {
        char parantez = s[i];
        // acma parantez ise push la
        if (parantez == '[' || parantez == '{' || parantez == '(') {
            push(&stck, parantez);
        } else {
            // kapatma parantez pop la karsilastir
            char last = pop(&stck);
            switch (last) {
                // eger karsilastirma yanlis ise not balanced
                case '(':
                    if (parantez != ')')
                        return "NO";
                    break;
                case '{':
                    if (parantez != '}')
                        return "NO";
                    break;
                case '[':
                    if (parantez != ']')
                        return "NO";
                    break;
            }
        }
    }

    // stack bos ise balanced
    if (isEmpty(&stck))
        return "YES";
    else
        // degilse not balanced
        return "NO";
}

void test_brackets() {

    int t;
    scanf("%d", &t);
    readline();

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char *s = readline();

        char *result = isBalanced(s);
        printf("%s", result);
    }
}


