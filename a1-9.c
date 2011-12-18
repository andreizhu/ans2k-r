/* Exercise 1.9. Write a program to copy its input to its output, 
 * replacing string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main(){
	int c=0;

	while ((c=getchar())!=EOF){
		if (c == ' '){
			putchar(c);
			while ((c=getchar() )== ' ' && c != EOF)
				;
		}
		if (c==EOF)
			break;
		putchar(c);
	}
	return 0;
}
