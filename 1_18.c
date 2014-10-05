#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int   getLine(char line[], int maxline);
void  trim(char input[]);
int   size(char input[]);

int main () {
	int len;
	char line[MAXLINE];
	char trimmed_line[MAXLINE];
	
	while ( (len = getLine(line, MAXLINE)) > 0 ) {
		trim(line);
		/* don't print any blank lines */
		if (size(line) > 0) {
			printf("%s", line);
		}	
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


void trim(char input[]) {
	/* figure out where the end of the string is */
	int end = 0, i;
	for (i = 0; i < MAXLINE; ++i) {
		if (input[i] == '\n') {
			end = i;
			break;    
		}   
	}   

	/* figure out where the last non-blank character is */
	int lastValid = 0;
	for (i = end; i >= 0 ; --i) {
		if (input[i] != '\n' && input[i] != '\t' && input[i] != ' ') {
			lastValid = i;
			break;
		}
	}

	/* move the newline and null-terminator just after the last valid character */
	input[lastValid+1] = '\n';    
	input[lastValid+2] = '\0';    
}

int size(char input[]) {
	int size = 0, i;
	for (i = 0; i < MAXLINE; ++i) {
		if (input[i] == '\n') {
			break;
		}   
		size++;
	} 
	return size;  
}
