#include <stdio.h>

int main()
{
  int n, i, j, count=0;
  int a[105], b[105], c[105];

  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
    a[i]=0;
    b[i]=0;
    c[i]=0;
  }
  for(i=0; i<n; i++)
  {
    scanf("%d %d", &(a[i]), &(b[i]));
  }

  for (i=0; i<n; i++)
  {
    for (j=0; j<n; j++)
    {
      if(b[j]==a[i] && j!=i)
      {
        c[i]=1;
        break;
      }
    }
  }

  for(i=0; i<n; i++)
  {
    if(c[i]==0) count++;
  }

  printf("%d\n", count);

  return 0;
}
