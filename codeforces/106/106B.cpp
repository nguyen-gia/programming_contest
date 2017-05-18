#include<stdio.h>
typedef struct st{
	int speed;
	int ram;
	int hdd;
	int cost;
} com;

int n,b[100];
com a[100];

void input()
{
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d %d %d",&(a[i].speed),&(a[i].ram),&(a[i].hdd),&(a[i].cost));
}

int compare(com a, com b)
{
	if (a.speed < b.speed && a.ram < b.ram && a.hdd <b.hdd) return -1;
	else
		if(a.speed > b.speed && a.ram > b.ram && a.hdd >b.hdd) return 1;
		else return 0;

}

int process()
{
	int i, j;
	for(i=0; i<n-1; i++)
		for(j=i+1;j<n;j++)
		{
			if(compare(a[i],a[j])==1) b[j]=1;
			if(compare(a[i],a[j])==-1) b[i]=1;
		}
	int min = 10000;
	for(i=0;i<n;i++)
		if(b[i]!=1 && a[i].cost<min)
		{
			min = a[i].cost;
			j=i;
		}
	return j+1;
}
int main()
{
	input();
	printf("%d\n", process());
	return 0;
}
