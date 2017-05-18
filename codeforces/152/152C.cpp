#include<stdio.h>
int main(){
	int n,m;
	int a[101][30];
	int b[101];

	int i,j;
	char c;
	long long sum=1;
	scanf("%d %d",&n,&m);
	for(j=0;j<m;j++)
	{
		b[j]=0;
		for(i=0;i<30;i++)
			a[j][i]=0;
	}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			c=getchar();
			while(c<'A' || c>'Z') c= getchar();
			if(a[j][c-'A']==0){
				b[j]++;
				a[j][c-'A']=1;
			}
		}
	sum = b[0];
	for(j=1;j<m;j++){
		//printf("%d\n",b[j]);
		sum=(sum*b[j])%1000000007;
	}
	printf("%d\n",sum);
	return 0;
}
