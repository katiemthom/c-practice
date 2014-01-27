#include <stdio.h>

int main() {
	
	int c; 
	int last; 

	while ((c = getchar()) != EOF ) {
		if ((c == ' ' || c == '\t' || c == '\n') && last != ' ') {
			putchar(' ');
			last = ' '; 
		}
		else if (c != ' ' && c != '\t' && c != '\n') {
			putchar(c);
			last = c; 
		} 
			
	}

}