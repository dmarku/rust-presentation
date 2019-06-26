#include <stdio.h>

enum Direction { UP, DOWN, LEFT, RIGHT };

int main() {
	enum Direction d = 8;
	int x = 3.1415;
	printf("%i\n", x);
	printf("integer size: %i\n", sizeof(int));
	printf("long size:    %i\n", sizeof(long));
	printf("pointer size: %i\n", sizeof(int*));
	return 0;
}
