#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 

// use array as "bins" to store number of words with certain word length 

// count digits in each word with a counter -- might be useful to check 1-12
// when switched to out, increment proper space in array and reset counter 

// histogram of length of all words in input up to word length 9

int main() {

	int c, i, counter, j, state; 
	state = OUT;  
	int ndigit[10]; 

	for (i = 0; i < 10; ++i) 
		ndigit[i] = 0; 

	while ((c = getchar()) != EOF) {

		if (c == ' ' || c == '\n' || c=='\t') {
			state = OUT; 
			++ndigit[counter];
			counter = 0; 
		}

		else if (state == OUT) {
			state = IN; 
		}

		if (state == IN) {
			++counter;
		}
	}

	for (i = 0; i < 10; ++i) {
		for (j = 0; j < ndigit[i]; ++j) {
			printf("*"); 
		}
		printf("\n"); 
	}
	
}