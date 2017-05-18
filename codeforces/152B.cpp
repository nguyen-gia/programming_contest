#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

long long tinh(int *xc, int *yc, int dx, int dy, int n, int m){
	int a,b,min;
	if(dx==0){
		if(dy>0){
			a=(m-*yc)/dy;
			*yc+=a*dy;
			return a;
		}
		else {
			a=(*yc-1)/(-dy);
			*yc+=a*dy;
			return a;
		}
	}

	if(dy==0){
		if(dx>0){
			a=(n-*xc)/dx;
			*xc+=a*dx;
			return a;
		}
		else {
			a=(*xc-1)/(-dx);
			*xc+=a*dx;
			return a;
		}
	}

	if(dx>0 && dy>0)
	{
		a=(n-*xc)/dx;
		b=(m-*yc)/dy;
		if(a>b) min= b;
		else min=a;
		*xc+=min*dx;
		*yc+=min*dy;
		return min;
	}

	if(dx>0 && dy<0)
	{
		a=(n-*xc)/dx;
		b=(*yc-1)/(-dy);
		if(a>b) min= b;
		else min=a;
		*xc+=min*dx;
		*yc+=min*dy;
		return min;
	}

	if(dx<0 && dy>0)
	{
		a=(*xc-1)/(-dx);
		b=(m-*yc)/dy;
		if(a>b) min= b;
		else min=a;
		*xc+=min*dx;
		*yc+=min*dy;
		return min;
	}

	if(dx<0 && dy<0)
	{
		a=(*xc-1)/(-dx);
		b=(*yc-1)/(-dy);
		if(a>b) min= b;
		else min=a;
		*xc+=min*dx;
		*yc+=min*dy;
		return min;
	}
}

int main(){
	int n,m,xc,yc,k,i,dx,dy;
	long long sum=0;
	scanf("%d %d",&n,&m);
	scanf("%d %d",&xc,&yc);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&dx, &dy);
		sum+=tinh(&xc, &yc, dx, dy, n, m);
		//printf("%d %d\n", xc, yc);
	}
	cout << sum;
	return 0;
}
