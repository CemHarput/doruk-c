//
// Created by memn on 7/4/18.
//

#include "stacks.h"


void init(stack *s);

void push(stack *s, stack_type item);

stack_type pop(stack *s);

stack_type peek(stack *s);

void init(stack *s) {
    s->top = 0;
}

void push(stack *s, stack_type item) {
    s->data[s->top++] = item;
}

stack_type pop(stack *s) {
    return s->data[--(s->top)];
}

stack_type peek(stack *s) {
    return s->data[s->top - 1];
}

int max(stack *s) {
    int max = 0;
    for (int i = 0; i < s->top; i++) {
        if (max < s->data[i])
            max = s->data[i];
    }
    return max;
}

int test() {
    int line;
    scanf("%d", &line);
    int input;
    stack s1;
    init(&s1);
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        if (input == 1) {
            scanf("%d", &input);
            push(&s1, input);
        }
        if (input == 2)
            pop(&s1);
        if (input == 3)
            printf("%d\n", max(&s1));
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}