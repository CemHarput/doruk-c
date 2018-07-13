//
// Created by memn on 7/6/18.
//

#include "queues.h"
#include <math.h>

void queue_test() {
    queue q;
    int temp;
    queue_init(&q);
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &temp);
        enqueu(&q, temp);
    }
    for (int i = 0; i < 2; ++i) {
        dequeue(&q);
    }
    print_queue(&q);
}


bool queue_is_empty(queue *q) {
    if (!q->full && q->rear == q->front)
        return true;
    else
        return false;
}

void queue_init(queue *q) {
    q->data = (queue_type *) malloc(SIZE * sizeof(queue_type));
    q->front = 0;
    q->rear = 0;
    q->full = false;

}

void enqueu(queue *q, queue_type qt) {
    if (!q->full) {
        q->data[q->rear] = qt;
        q->rear++;
        if (q->rear == SIZE) {
            q->rear = 0;
        }
        if (q->front == q->rear) {
            q->full = true;
            printf("WARNING: Queue is reached to limit\n");
            print_queue(q);
        }
    } else {
        printf("Cannot enqueue, since queue is full.\n");
        print_queue(q);
    }


}

queue_type dequeue(queue *q) {
    if (!queue_is_empty(q)) {
        queue_type t = q->data[q->front];
        q->front++;
        if (q->front == SIZE) {
            q->front = 0;
        }
        q->full = false;
        return t;
    } else {
        printf("Cannot dequeue since queue is empty\n");
        return -1;
    }
}


void print_queue(queue *q) {
    if (q->full || q->front > q->rear) {
        for (int i = q->front; i < SIZE; i++) {
            printf("%d ", q->data[i]);
        }

        for (int i = 0; i < q->rear; i++) {
            printf("%d ", q->data[i]);
        }

    } else {
        for (int i = q->front; i < q->rear; ++i) {
            printf("%d ", q->data[i]);
        }
    }


    printf("\n");
}