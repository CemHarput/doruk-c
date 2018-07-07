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

int main() {
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


    return 0;
}


