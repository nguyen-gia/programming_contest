#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=n/7;i>=0;i--)
		if(((n-7*i)%4==0 && (n-7*i)>=4)||(n-7*i == 0))
			break;
	if(i==-1) printf("-1\n");
	else
	{

		for(j=0;j<(n-7*i)/4;j++)
			printf("%d",4);
		for(j=0;j<i;j++)
			printf("%d",7);
		printf("\n");

	}
return 0;
}
