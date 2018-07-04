//
// Created by memn on 7/2/18.
//

#include <string.h>
#include <printf.h>
#include <stdio.h>
#include "strings-manip.h"

void replace(char *str,
// The given string
             char c1, char c2) {
// The characters
    int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == c1)
            str[i] = c2;
}

void test() {
    char sent[20], ch1, ch2;
// Get the sentence and the characters
    printf("Enter a sentence: ");
    scanf("%[^\n]", sent);
// gets(sent);
    printf("Enter the character to replace: ");
    scanf(" %c", &ch1);
    printf("Replace with: ");
    scanf(" %c", &ch2);
// Make replacements and display the new sentence
    replace(sent, ch1, ch2);
    printf("\nThe new sentence: %s\n", sent);
}

