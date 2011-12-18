/* Exercise 5-3.  Write a pointer version of the function strcat that we showed in Chapter 2: 
 * strcat(s,t) copies the string t to the end of s.
 */

#include <stdio.h>

void strcpy(char *s, char *t){
	while (*s++ = *t++)
		;
}

void strcat(char *s, char *t){
	while (*s)
		s++;
	strcpy(s,t);
}

int main(){
	char s[20]="This is ";
	char t[10]="a test";
	printf("%s\n%s\n", s, t);
	strcat(s,t);
	printf("%s\n", s);
	return 0;
}
