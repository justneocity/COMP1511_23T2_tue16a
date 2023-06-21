#include <stdio.h>

#define SIZE 1000

int main(void) {

    // declare array
    int array[SIZE] = {0};

    int var; 
    int i = 0;
    while ((scanf("%d", &var)) == 1) {

        // store into array
        array[i] = var;
        i++;
    }


    // print values in array
    int j = 0;
    while (j < i) {
        printf("%d\n", array[j]);
        j++;
    }


    return 0;
}