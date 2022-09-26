#include<stdio.h>
#include<string.h>
int main()
{
	char *s;
	int len,i;
	printf("Enter a string:");
	gets(s);
	len=strlen(s);
	printf("Reverse of the string is:");
	for(i=len;i>=0;i--)
		printf("%c",*(s+i));
}
