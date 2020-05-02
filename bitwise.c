/*
Bitwise intro
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argv, char* argc[]){
    if (!(argv == 2)){
        puts("Enter provide one operation argument");
        exit(1);
    }
    int length = strlen(argc[1]);
    char *op = (char*) malloc(length*sizeof(char));
    strcpy(op, argc[1]);
    char is_and[3] = "and";
    char is_or[2] = "or";
    char is_sleft[5] = "sleft";
    char is_sright[6] = "sright";

    if (strcmp(op, is_and) <= 0){
        puts("&");
        for (int i = 0; i < 10; ++i){
            printf("%d & 1 = %d\n", i, i & 1);
        }
    } else if (strcmp(op, is_or) <= 0){
        puts("|");
        for (int i = 0; i < 10; ++i){
            printf("%d | 1 = %d\n", i, i | 1);
        }
    } else if (strcmp(op, is_sleft) <= 0){
        puts("<<");
        for (int i = 0; i < 10; ++i){
            printf("%d << 1 = %d\n", i, i << 1);
        }
    } else if (strcmp(op, is_sright) <= 0){
        puts(">>");
        for (int i = 0; i < 10; ++i){
            printf("%d >> 1 = %d\n", i, i >> 1);
        }
    } else {
        printf("You entered '%s'\n", op);
        puts("Must be one of: and or sleft sright");
    }
    free(op);
    return 0;
}
