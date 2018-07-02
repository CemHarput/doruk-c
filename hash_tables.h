//
// Created by memn on 7/2/18.
//

#ifndef DORUK_HASH_TABLES_H
#define DORUK_HASH_TABLES_H

enum record_status {
    EMPTY, DELETED, OCCUPIED
};

typedef struct {
    int count; // 0 sa  empty dir, -1 se deleted dir, 1 veya buyukse occupied dir
    char *word;
//    enum record_status status;
} hash_t;


void insert(hash_t table, char *word);

int search(hash_t param, char *string);

void delete(hash_t param, int i);

#endif //DORUK_HASH_TABLES_H
