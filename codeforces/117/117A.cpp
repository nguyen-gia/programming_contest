#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int n,m;
int main()
{
	int s,f,t,i,vt,ctm,kq;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		kq=0;
		scanf("%d%d%d",&s,&f,&t);
		if(f==s)
		{
			printf("%d\n",t);
			continue;
		}
		if(t/(m-1)%2==0)
		{
			vt=t%(m-1)+1;
			ctm=1;
		}
		else
		{
			vt=m-t%(m-1);
			ctm=-1;
		}
		if(f>s)
		{
			if(ctm==1 && vt<=s) kq=t+f-vt;
			if(ctm==1 && vt>s) kq = t+m-vt+m-1+f-1;
			if(ctm==-1) kq = t+vt-1+f-1;
		}
		if(f<s)
		{
			if(ctm==-1 && vt>=s) kq = t+vt-f;
			if(ctm==-1 && vt<s) kq = t+vt-1+m-1+m-f;
			if(ctm==1) kq=t+m-vt+m-f;
		}
		printf("%d\n",kq);
	}
	return 0;
}
