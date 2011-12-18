/* Exercise 5-4. Write the function strend(s,t), which returns 1 if the string 
 * t occurs at the end of the string s, and zero otherwise.
 */

#include <stdio.h>

int strlen(char *s){
	int len=0;
	while (*s){
		s++;
		len++;
	}
	return len;
}

int strend(char *s, char *t){
	if (strlen(s) >= strlen (t))
		s+= strlen(s) - strlen(t);
		for ( ;  *s == *t ; s++, t++)
			if (*s)
				return 1;
	return 0;	
			
}

int main(){
	char *s="This is a test.";
	char *t="test";
	char *u="test.";
	if (!strend(s,t))
		printf("The string %s doesn't occur at the end of string %s\n", t , s);
	if (strend(s,u))
		printf("The string *s occurs at the end of string %s\n", u, s);
	return 0;
}
