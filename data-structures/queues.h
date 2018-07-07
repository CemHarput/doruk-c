//
// Created by memn on 7/6/18.
//

#ifndef DORUK_QUEUES_H
#define DORUK_QUEUES_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define SIZE 4
typedef int queue_type;
typedef struct {
    queue_type *data;
    int front;
    int rear;
    bool full;
} queue;

bool queue_is_empty(queue *q);

void queue_init(queue *q);

void enqueu(queue *q, queue_type qt);

queue_type dequeue(queue *q);

void print_queue(queue *q);

#endif //DORUK_QUEUES_H
