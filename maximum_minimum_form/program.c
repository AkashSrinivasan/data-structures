#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,*b,i,j,k,l,n,save;
    printf("enter the elements=");
    scanf("%d",&n);
    a=(int*)malloc(n* sizeof(int));
    b=(int*)malloc(n* sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int first=0;
    int last=n-1;
    int f=true;
    for(i=0;i<n;i++)
    {
        if(f)
        {
            b[i]=a[last];
            last--;
        }
        else
        {
            b[i]=a[first];
            first++;
        }
        f=!f;
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
        printf("%d ",a[i]);
    }

    return 0;
}
The output is 
enter the elements=8                                                                                                                                                               
1                                                                                                                                                                                  
2                                                                                                                                                                                  
3                                                                                                                                                                                  
4                                                                                                                                                                                  
5                                                                                                                                                                                  
6                                                                                                                                                                                  
7                                                                                                                                                                                  
8     
The output is8 1 7 2 6 3 5 4    
