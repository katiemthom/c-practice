// line-count.c
#include <stdio.h>

int main() {
	int c, nl, s, t; 

	t = 0; 
	nl = 0;
	s = 0; 

	while ((c = getchar()) != EOF)
		if (c == '\t')
			++t; 
		else if (c == '\n')
			++nl; 
		else if (c == ' ')
			++s; 
	printf("new lines: %d\ntabs: %d\nspaces: %d\n", nl, t, s);
}