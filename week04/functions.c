#include <stdio.h>

void print_instructions();
int scan_into_array(int temps[SIZE]);

int main(void) {

    // 1. create a double array of 7 elements
    double array[SIZE];

    print_instructions();

    // 2. while loop with scanf to insert into array
    int returned_sum = scan_into_array(array);

    // 3. loop through to sum each value

    // 4. find average
    double avg = returned_sum / 7;
    printf("%.2lf", avg);
    
    return 0;
}

int scan_into_array(int temps[SIZE]){
    double sum = 0;
    int i = 0;
    while (i < SIZE) {
        scanf("%lf", &temps[i]);
        sum = sum + temps[i];
        i++;
    }
    return sum;
} 

void print_instructions() {
    printf("Instruction 1");
    printf("Instruction 2");
}