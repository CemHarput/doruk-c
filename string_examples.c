//
// Created by memn on 6/22/18.
//
#include <string.h>
#include <stdio.h>
#include <values.h>

void string_example_comparison() {
    int comparison;
    char *text = "first text.";
    char *text2 = "fixst text.";
    char *text3 = "fiRst text.";
    char *text4 = "Second text.";

    comparison = strcasecmp(text, text2);
    printf("%d\n", comparison);

    comparison = strcasecmp(text, text3);
    printf("%d\n", comparison);

    comparison = strcmp(text2, text3);
    printf("%d\n", comparison);

    comparison = strcasecmp(text, text4);
    printf("%d\n", comparison);

    comparison = strncmp(text, text4, 2);
    printf("%d\n", comparison);


}


void string_example_2() {
    char dest[100] = "";
    char text[40] = "first text.";
    char text2[40] = "fixst text.";


    memset(dest, '\0', sizeof(dest));
    printf("%s\n", dest);
    strcat(dest, text2);
    printf("%s\n", dest);
    strcat(dest, text);
    printf("%s\n", dest);

    strcpy(text, text2);
    printf("%s\n", text);



//    strchr();
//    strcoll();
//    strcspn();
//    strlen();


}


