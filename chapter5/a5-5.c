/* Exercise 5-5. Write versions of the library functions strncpy, strncat, 
 * and strncmp, which operate on at most the first n characters 
 * of their argument strings. For example, strncpy(s,t,n) copies at most 
 * n characters of t to s. Full descriptions are in Appendix B.
 */

#include <stdio.h>

int strlen(char *s){
	int len;

	while (*s++)
		len++;
	return len;
}

char *strncpy(char *s, char *t, int n){
	char *p = s;

	if ( n <= strlen(t)){
		for (;n > 0 && *(t+1); n--)
			*s++ = *t++;
	return p;
	}
}

char *strncat(char *s, char *t, int n){
	char *p=s;
	
	while (*s)
		s++;
	if ( n <= strlen(t))
		for (; n > 0; n--)
			*s++=*t++;
	return p;
}

int strncmp(char *s, char *t, int n){
	/*for (; *s==*t && n > 0; s++,t++,n--)
		if (n==0)
			return 0;
	return *(s-1)-*(t-1);*/
	int i;
	
	for ( i=1;i<=n;i++)
		if (*s!=*t)
			return *s-*t;
	return 0;
}

int main(){
	char s[20]="Make likes";
	char *t="Syde";
	char *u=" maths.";

	printf("%s\n",strncpy(s,t,4));
	printf("%s\n",strncat(s,u,6));
	printf("%d\n", strncmp(s,"S",1));
	return 0;
}
