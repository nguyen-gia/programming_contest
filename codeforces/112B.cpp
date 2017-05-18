#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n, x, y;
int check(int n, int x, int y)
{
	if(x==n/2 || x == n/2+1)
		if(y== n/2 || y == n/2+1)
			return 1;
	return 0;
}
int main()
{
	scanf("%d%d%d",&n, &x, &y);
	if(check(n,x,y) == 1) printf("NO\n");
	else printf("YES\n");
	return 0;
}
