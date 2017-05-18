#include <stdio.h>

int main()
{
  int n, m, i, d=0;
  int a[100005];
  int b[100005];
  int t, v, x, y, q;

  scanf("%d %d", &n, &m);
  for(i=0; i<n; i++)
  {
    scanf("%d", &(a[i]));
    b[i]=0;
  }

  for(i=0; i<m; i++)
  {
    scanf ("%d", &t);
    if (t==1)
    {
      scanf("%d %d", &v, &x);
      b[v-1] = x - a[v-1] - d;
    }
    else if (t==2)
    {
      scanf("%d", &y);
      d+=y;
    }
    else if (t==3)
    {
      scanf("%d", &q);
      printf("%d\n", a[q-1]+d+b[q-1]);
    }
  }
  return 0;
}
