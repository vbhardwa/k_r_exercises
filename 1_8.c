#include "stdio.h"

int main () {
	int c = 0,  bl = 0, t = 0, nl = 0;
	while ( (c = getchar()) != EOF ) {
		if (c == ' ' ) { 
			++bl;
		} else if (c == '\t') {
			++t;
		} else if (c == '\n') {
			++nl;
		}	
	} 
	
	printf("Number of blanks: %d\n", bl);
	printf("Number of tabs: %d\n", t);
	printf("Number of newlines: %d\n", nl);
	
	return 0;
}
