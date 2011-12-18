/* Exercise 1-8. Write a program to count blanks, tabs, and newline.
 */

#include <stdio.h>

int main(){
	int c, nspace, ntab, nline;

	nspace = 0;
	ntab= 0;
	nline=0;
	while ((c = getchar()) != EOF){
		if (c == ' ' )
			++nspace;
		if (c == '\t')
			++ntab;
		if (c == '\n')
			++nline;
	}
	printf("number of blanks, tabs and newlines are %d, %d, %d\n", nspace, ntab, nline);
	return 0;
}
