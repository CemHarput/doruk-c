//
// Created by memn on 7/4/18.
//

#ifndef DORUK_STACKS_H
#define DORUK_STACKS_H

#include <stdio.h>

typedef char stack_type;
typedef struct {
    int top;
    stack_type data[50];

} stack;

void init(stack *s);

void push(stack *s, stack_type item);

stack_type pop(stack *s);

stack_type peek(stack *s);

//int max(stack *s);


#endif //DORUK_STACKS_H
