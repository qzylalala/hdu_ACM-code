#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int m, n, val, max, maxi, maxj, i, j;
    while(scanf("%d%d", &m, &n) != EOF)
    {
        max=0;
        maxi=1;
        maxj=1;
        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
            {
                scanf("%d", &val);
                if(abs(val) > abs(max))
                {
                    max = val;
                    maxi = i;
                    maxj = j;
                }
            }
        printf("%d %d %d\n", maxi, maxj, max);
    }
    return 0;
}
