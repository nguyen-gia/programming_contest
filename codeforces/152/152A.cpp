#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, m;
	int i,j;
	int A[101][101];
	int B[101];
	char c;
	int count=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++){
		B[i]=0;
	}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			c=getchar();
			while(c<'1' || c>'9') c=getchar();
			A[i][j]=c-'0';
			if(B[j]<A[i][j]) B[j]=A[i][j];
		}

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(A[i][j]==B[j])
			{
				count ++;
				break;
			}
	printf("%d\n",count);
	return 0;
}
