#include<stdio.h>

int a[5], b[5];

int mu(int a, int n){
	int i, kq=1;
	for(i=0;i<n;i++){
		kq*=a;
	}
	return kq;
}
int tinh(int p[], int n, int base){
	int i,sum=0;
	for(i=n-1;i>=0;i--){
		sum+=p[i]*mu(base,n-i-1);
	}
	return sum;
}

int main(){
	int i,na, nb, ma=0,mb=0,max,check=0;
	char c;
	i=0;
	while((c=getchar())!=EOF){
		if(c>='0' && c<'9') a[i++]=c-'0';
		if(c>='A' && c<='Z') a[i++]=c-'A'+10;
		if(a[i-1]>ma) ma=a[i-1];
		if(c==':') break;
	}
	na=i;
	i=0;
	while((c=getchar())!=EOF){
		if(c>='0' && c<'9') b[i++]=c-'0';
		if(c>='A' && c<='Z') b[i++]=c-'A'+10;
		if(b[i-1]>mb) mb=b[i-1];
		if(c=='\n') break;
	}
	nb=i;
	//for(i=0;i<na;i++) printf("%d \n", a[i]);
	//for(i=0;i<nb;i++) printf("%d \n", b[i]);
	if(ma>mb) max = ma+1;
	else max = mb+1;
	//printf("%d %d %d %d\n",na, nb,tinh(a,na,max), tinh(b,nb,max));
	if(tinh(a,na,max)>23 || tinh(b,nb,max)>59){
		printf("0\n");
		return 0;
	}

	for(i=0;i<na-1;i++)
		if(a[i]!=0) check =1;
	for(i=0;i<nb-1;i++)
		if(b[i]!=0) check =1;
	if(check==0){
		printf("-1\n");
		return 0;
	}

	i=max;
	while(tinh(a,na,i)<24 && tinh(b,nb,i)<60){
		printf("%d ",i);
		i++;
	}
	printf("\n");
	return 0;
}
