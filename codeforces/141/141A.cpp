#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s1[105];
	char s2[105];
	char s3[105];
	int a[30];
	int b[30];
	int i;
	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%s", s3);
	if(strlen(s1)+ strlen(s2) != strlen(s3)) {
		printf("NO\n");
		return 0;
	}
	else {
		for(i=0;i<30;i++){
			a[i]=0;
			b[i]=0;
		}
		for(i=0; i< strlen(s1) ;i++){
			a[s1[i]-'A']++;
		}
		for(i=0; i< strlen(s2) ;i++){
			a[s2[i]-'A']++;
		}
		for(i=0; i< strlen(s3) ;i++){
			b[s3[i]-'A']++;
		}

		for(i=0;i<30;i++){
			if(a[i]!=b[i]) {
				printf("NO\n");
				return 0;
			}
		}
		printf("YES\n");

	}
	return 0;
}
