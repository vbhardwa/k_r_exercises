#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getLine(char line[], int maxline);
int trim(char input[], char[] output);

int main () {
	int len;
	char line[MAXLINE];
	char trimmed_line[MAXLINE];
	
	while ( (len = getLine(line, MAXLINE)) > 0 ) {
		
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


int trim(char input[]) {
    int end = 0, i;
    for (i = 0; i < MAXLINE; ++i) {
        if (line[i] != '\n') {
            end = i;    
        }   
    }   

    int lastValid = 0;
    for (i = end; i >= 0 ; --i) {
    }   
}
