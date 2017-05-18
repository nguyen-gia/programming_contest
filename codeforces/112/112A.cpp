#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* change(char s[])
{
	int i;
	for(i=0;i<strlen(s);i++)
		if(s[i]>=97) s[i]-=32;
	return s;
}
int main()
{
	char s1[101], s2[101];
	scanf("%s",s1);
	scanf("%s",s2);
	if(strcmp(change(s1),change(s2)) < 0) printf("-1\n");
	else if(strcmp(change(s1),change(s2)) > 0) printf("1\n");
	else printf("0\n");
	return 0;
}
