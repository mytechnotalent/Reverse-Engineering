#include <stdio.h>

/**
 * Function to swap the values to two integers
 * @param c first number to be swapped
 * @param d second number to be swapped
 */
void swap(int* c, int* d);

int main(void)
{
    int a = 25;
    int b = 100;

    printf("a is %d, b is %d: BEFORE SWAP\n", a, b);
    printf("address of a: %p\n", &a);
    printf("address of b: %p\n", &b);

    swap(&a, &b);
    printf("a is %d, b is %d: AFTER SWAP\n", a, b);
    printf("address of a: %p\n", &a);
    printf("address of b: %p\n", &b);

    return 0;
}

void swap(int* c, int* d)
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    printf("c is %d, d is %d: INSIDE SWAP\n", *c, *d);
    printf("address of c: %p\n", c);
    printf("address of d: %p\n", d);
}