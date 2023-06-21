#include <stdio.h>

int main(void) {
    char var; 
    while ((scanf(" %c", &var)) == 1) {

        // printf
        printf("%c\n", var);
    }
    
    return 0;
}