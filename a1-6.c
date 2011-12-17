/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main(){
	int c;

	for ( ; ; ){
		c = getchar() != EOF;
		printf("The value of the expression getchar() != EOF is %d\n",c);
		if (c == 0)
			break;
	}
	return 0;
}
		
