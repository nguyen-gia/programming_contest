#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,count = 0;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
		if(s[i]=='4'|| s[i]=='7')
			count++;
	if(count == 4 || count == 7)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}
