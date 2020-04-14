#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = 10, *ptr = &a;
	int *ptr2 = ptr, b = 10;
//	ptr = &a;
//	ptr2=ptr;
	printf("%d", *ptr2);
}
