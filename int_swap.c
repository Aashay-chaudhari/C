#include <stdio.h>

typedef int *intp;

void inplace_swap(int *x, int *y){
    printf("\nBefore swap: *x = %d, *y = %d\n", *x, *y);

    *y = *x ^ *y; /* Step 1 */
    printf("After Step 1: *x = %d, *y = %d\n", *x, *y);

    *x = *x ^ *y; /* Step 2 */
    printf("After Step 2: *x = %d, *y = %d\n", *x, *y);

    *y = *x ^ *y; /* Step 3 */
    printf("After Step 3: *x = %d, *y = %d\n", *x, *y);
}


void main(){

	int a = 25;
	int b = 30;
	intp pa = &a;
	intp pb = &b;
	printf("\nValue before swap : %d, %d ", a , b);
	printf("\nValue of pointers before swap : %p , %p", pa, pb);
	inplace_swap(pa,pb);
	printf("\nValue after swap : %d , %d ", a, b);
	printf("\nValue of pointers after swap: %p, %p ", pa, pb);
	printf("\n");
}
