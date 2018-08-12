KADANE ALGORITHM
    used to find the Largest Sum Contiguous Subarray


#include <stdio.h>


int main()
{
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n,max=0,maxnow,i;
    n=sizeof(a)/sizeof(a[0]);
    maxnow=a[0];
    for(i=0;i<n;i++)
    {
        max=max+a[i];
        if(maxnow<max)
        {
            maxnow=max;
        }
        if(max<0)
        {
            max=0;
        }
    }
    printf("%d",maxnow);

    return 0;
}
--------------------------------------------
output
--------------------------------------------
7
