#include<stdio.h>
#include<ctype.h>
char s[9] = {'6','7','8','9','T','J','Q','K','A'};
int chiso(char c)
{
	int i;
	for(i=0;i<=8;i++)
		if(s[i]==c)
			break;
	return i;
}
void check(char s1[],char s2[],char trump)
{
	if(s1[1]==s2[1])
	{
		if(chiso(s1[0])>chiso(s2[0])) printf("YES\n");
		else printf("NO\n");
	}
	else
	if(s1[1]==trump)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

}

int main()
{
	char trump;
	char s1[3];
	char s2[3];
	scanf("%c\n",&trump);
	scanf("%s %s",s1,s2);
	check(s1,s2,trump);
	return 0;
}
