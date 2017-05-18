#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
  char s1[100005], s2[100005];
  int a[30], b[30];
  int i,j=0,k=0;
  char c1,c2;
  scanf("%s", s1);
  scanf("%s", s2);
  if(strlen(s1)!= strlen(s2))
    printf("NO\n");
  else{
    for(i=0;i<strlen(s1);i++)
      {
	if (s1[i]!=s2[i] && j==0)
	  {
	    c1 = s1[i];
	    c2 = s2[i];
	    j++;
	  }
	else if (s1[i]!=s2[i] && j==1)
	  {
	    if(c1!=s2[i] || c2!=s1[i])
	      {
		printf("NO\n");
		return 0;
	      }
	    else k=1;
	    j++;
	  }
	else if(s1[i]!=s2[i] && j>1)
	  {
	    printf("NO\n");
	    return 0;
	  }
      }
    if(k==1) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}
