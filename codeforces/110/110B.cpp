#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char s[100002];
	char a[4] = {'a','b','c','d'};
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
		j=i;
		while(j<n)
		{
			s[j]=a[i];
			j+=4;
		}
	}
	s[n]='\0';
	puts(s);
	return 0;
}
