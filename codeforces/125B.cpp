#include<stdio.h>
#include<string.h>
#include<math.h>

char stack[1000];
int top;
int level[1000];
char s[1010];

int main()
{
	int i=0,k=1,j;
	scanf("%s",s);
	top=0;
	while(i<strlen(s))
	{
		i++;
		if(s[i]!='/')
		{
			stack[top++]=s[i];
			level[top-1]=k;
			k++;
			i+=2;
		}
		else
		{
			stack[top++]=s[i+1];
			k--;
			level[top-1]=-k;
			i+=3;
		}
	}
	/*for(i=0;i<top;i++)
	{
		printf("%c",stack[i]);
	}*/
	for(i=0;i<top;i++)
	{
		for(j=0;j<abs(level[i])-1;j++)
		printf("  ");
		if(level[i]>0)printf("<%c>\n",stack[i]);
		else if(level[i]<0) printf("</%c>\n",stack[i]);
	}
	return 0;
}
