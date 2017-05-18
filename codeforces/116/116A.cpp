#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int n,i,m=0,k,p=0,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		k=p-a+b;
		if(k>m) m=k;
		p=k;
	}
	printf("%d\n",m);
	return 0;
}
