#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	if(a+1<=n-b)
		printf("%d\n",b+1);
	else
		printf("%d\n",n-a);
	return 0;
}
