#include <stdio.h>

int main() {
    float test1, test2, total;

     printf("Enter Test 1 marks for Subject 1: ");
    scanf("%f", &test1);

    printf("Enter Test 2 marks for Subject 2: ");
    scanf("%f", &test2);

    total = test1 + test2;
    printf("Total marks = %.2f\n", total);

    
    return 0;
}

