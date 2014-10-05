#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int   getLine(char line[], int maxline);
void  reverse(char input[]);

int main () {
	int len;
	char line[MAXLINE];
	char trimmed_line[MAXLINE];
	
	while ( (len = getLine(line, MAXLINE)) > 0 ) {
		reverse(line);
		printf("%s", line);
	}
	return 0;
}

int getLine (char s[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


void reverse(char input[]) {
	/* go to last charcter of the string */
	int start = 0, last = 0, i;
	for (i = 0; i < MAXLINE; ++i) {
		if (input[i] == '\n') {
			break;    
		} else {
			++last;
		}
	}
	--last; // to offest for index starting at 0

	/* swap characters from the two ends */ 	
	char tmp;   
	while (start < last) {
		tmp          = input[last];
		input[last]  = input[start];
		input[start] = tmp;
		--last;
		++start;
	}
}

