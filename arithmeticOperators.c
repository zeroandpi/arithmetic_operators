#include <stdio.h>

int main(void) {

	int a;
	int b, c;	
	a = 5;
	b = 7;
	
	printf("a = %d, b = %d, c = %d\n\n", a, b, c);
	printf("a + b = %d\n", (a + b) );

	c = b - a;

	printf("c = b - a = %d\n", c);

	printf("%d * %d = %d\n", a, b, (a * b) );

	printf("Why %d / %d = %d\n", b, a, (b / a) );

	printf("%d %% %d = %d\n", b, a, (b % a) );


	return 0;
}
