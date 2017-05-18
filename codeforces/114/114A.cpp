#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	unsigned int k, l, t;
	int i=0;
	scanf("%u%u",&k,&l);
	t=k;
	while(t<=l/k){
		t*=k;
		i++;
	}
	if(t==l)
	{
		printf("YES\n%d\n",i);
	}
	else printf("NO\n");
	return 0;
}
