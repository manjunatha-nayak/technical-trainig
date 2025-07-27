
#include <stdio.h>
#include <math.h>

int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            for(k=0;k<n-1;k++)
            {
                printf("  ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }
