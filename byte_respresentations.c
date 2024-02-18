#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	int i;
	for (i=0; i< len; i++)
		printf("\n Original binary imp : %.2d", start[i]);
		printf("\n Hexadecimal imp : ");
		printf("\n %.2x", start[i]);
	printf("\n");
}

void show_int(int x){
	printf("\n Inside show_int for value of x: %d", x);
	printf("\n Size of x is: %ld", sizeof(x));
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
	printf("\n Showing pointer details: ");
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
	int ival = val;
	int *pval = &ival;
	show_int(ival);
	show_pointer(pval);
}

int main(){

	test_show_bytes(25);
	return 0;
}
