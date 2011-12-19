/* Exercise 1-12. Write a program that prints its input one word per line.*/

#include <stdio.h>

#define IN 1
#define OUT 0

int
main(void){
	int c, state;

	state = IN;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c =='\t' || c == ' '){
			if (state == IN){
				state = OUT;
				putchar('\n');
			}
		}
		else{
		state = IN; 
		putchar(c);	
		}
	}
	return 0;
}
