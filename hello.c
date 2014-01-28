#include <stdio.h>
#include <string.h>

int main() {
	char y = 129;
	char* z = &y;  
	char* x = "hello, %u\n";
	printf(x, *z);
	printf("%d\n", strlen(x));
	return 0;
}
