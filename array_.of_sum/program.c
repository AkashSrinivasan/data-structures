
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *a,i,j,k,l,n,x;
    printf("enter the number of array");
    scanf("%d",&n);
    a=(int*)malloc(n* sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number sum=");
    scanf("%d",&x);
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]+a[j]==x  && i!=j )
            {
                
                printf("(%d,%d)",a[i],a[j]);
                count=count+1;
            }
            
        }
    }
    printf("\n%d",count);
    

return 0;
