#include <stdio.h>

// backspace
int main() {
	printf("hello, world\b");
}

// // does the same thing as f
// int main() {
// 	printf("hello, world\v");
// }

// doesn't seem to change output
// int main() {
// 	printf("hello, world\x13");
// }

// prints more than a new line...
// int main() {
// 	printf("hello, world\f");
// }

// prints nothing
// int main() {
// 	printf("hello, world\a");
// }

// prints a utf8 char at the end
// int main() {
// 	printf("hello, world\u0631");
// }

// // prints a tab
// int main() {
// 	printf("hello, world\t");
// }

/* prints nothing */
// int main() {
// 	printf("hello, world\r");
// }

/* prints with no whitespace */
// int main() {
// 	printf("hello, world\e");
// }