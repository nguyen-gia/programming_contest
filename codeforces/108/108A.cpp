#include<stdio.h>
int F[24][60];
int check(char a, char b, char c, char d)
{
	if (a==d && b ==c) return 1;
	else return 0;
}
void init()
{
	int i,j;
	char a,b,c,d;
	for(i=0;i<24;i++)
		for(j=0;j<60;j++)
		{
			a = i/10 + 48;
			b = i%10 + 48;
			c = j/10 + 48;
			d = j%10 + 48;
			if (check(a,b,c,d) == 1)
				F[i][j] =1;
			else F[i][j] =0;

		}
}
int main()
{
	int i,j,k,q,t;
	char c;
	init();
	scanf("%d%c%d",&i, &c, &j);
	t = 0;
	k=i;
	for(q=j+1;q<60;q++)
		if(F[k][q] == 1)
		{
			if(k<10 && q<10) printf("0%d:0%d",k,q);
			else
				if(k<10 && q>=10) printf("0%d:%d",k,q);
				else
					if(k>=10 && q<10) printf("%d:0%d",k,q);
					else
						if(k>=10 && q>=10) printf("%d:%d",k,q);
			t=1;
			break;
		}
	if(t==0)
	{
		for(k=i+1;k<24;k++)
		{
			for(q=0;q<60;q++)
				if(F[k][q] == 1)
				{
					if(k<10 && q<10) printf("0%d:0%d",k,q);
					else
						if(k<10 && q>=10) printf("0%d:%d",k,q);
						else
							if(k>=10 && q<10) printf("%d:0%d",k,q);
							else
								if(k>=10 && q>=10) printf("%d:%d",k,q);
					t=1;
					break;
				}
			if(t==1) break;
		}
	}
	if(t==0)
	{
		for(k=0;k<=i;k++)
		{
			for(q=0;q<60;q++)
				if(F[k][q] == 1)
				{
					if(k<10 && q<10) printf("0%d:0%d",k,q);
					else
						if(k<10 && q>=10) printf("0%d:%d",k,q);
						else
							if(k>=10 && q<10) printf("%d:0%d",k,q);
							else
								if(k>=10 && q>=10) printf("%d:%d",k,q);
					t=1;
					break;
				}
			if(t==1) break;
		}
	}
	return 0;
}
