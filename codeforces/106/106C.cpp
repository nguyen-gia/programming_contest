#include<stdio.h>
int n, m, c0, d0;
int a[2011],b[2011];
int F[2011][1001];
int ai,bi,ci,di;
int input()
{
	int i=1,j,t;
	scanf("%d %d %d %d", &n, &m, &c0, &d0);
	for(i=0;i<=n/c0;i++)
	{
		a[i] = c0;
		b[i] = d0;
	}
	for(j=0; j<m;j++)
	{
		scanf("%d %d %d %d",&ai,&bi,&ci,&di);
		for(t=i;t<i+ai/bi;t++)
		{
			a[t]=ci;
			b[t]=di;
		}
		i=t;
	}
	return i;
}

int cal()
{
	int p;
	int i,j;
	p= input();
	for(i=0;i<=n;i++)
		F[0][i] = 0;
	for(i=1;i<p;i++)
		for(j=0;j<=n;j++)
		{
			F[i][j] = F[i-1][j];
			if(F[i][j] < F[i-1][j-a[i]]+b[i] && j>=a[i])
				F[i][j] = F[i-1][j-a[i]]+b[i];
		}
	return F[p-1][n];
}

int main()
{
	printf("%d\n",cal());
	return 0;
}
