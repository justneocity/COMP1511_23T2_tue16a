#include <stdio.h>

#define SIZE 7

int main(void) {

    // 1. create a double array of 7 elements
    double temps[SIZE];

    // 2. while loop with scanf to insert into array

    double sum = 0;
    int i = 0;
    while (i < SIZE) {
        scanf("%lf", &temps[i]);
        sum = sum + temps[i];
        i++;
    }
    // 3. loop through to sum each value

    // 4. find average
    double avg = sum / 7;
    printf("%.2lf", avg);

    return 0;
}

// 