#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int b[2002];
int n, i,k,max=0;
int a[2002],check[2002];
int dfs(int i)
{
	if(check[i]==1) return b[i];
	if(a[i]==-1) b[i]=1;
	else b[i]=1+dfs(a[i]);
	return b[i];
}
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(dfs(i)>max) max = b[i];

	}
	printf("%d\n",max);
	return 0;
}
