#include "stdio.h"

int main () {
	int c;
	while (c = getchar() != EOF ) {
		printf("%d", c);
	}
	printf("%d", c);
	return 0;
}
