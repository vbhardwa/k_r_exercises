#include "stdio.h"

#define MAX_WORD_LEGNTH 50
#define IN              1
#define OUT             0 

int main () {
	int wordLengths[MAX_WORD_LEGNTH];
	int i, c, wl = 0, state = OUT;

	/* initialize */
	for (i = 0; i < MAX_WORD_LEGNTH; ++i) {
		wordLengths[i] = 0;
	}

	while ( (c = getchar()) != EOF ) {
		if (c != ' ' && c != '\t' && c!= '\n') {
			++wl;
			state = IN;	
		} else if (state == IN) {
			++wordLengths[wl]; 
			wl = 0;
			state = OUT;
		}			
	}

	/* historgram */
	int j;
	for (i = 0; i < MAX_WORD_LEGNTH; ++i) {
		printf("%d ", i);
		for (j = 0; j < wordLengths[i]; ++j) {
			printf("|");
		}		
		printf("\n");
	}

	return 0;
}
