
  #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{

    int *a,i=0,j,k,l,n,x,count=0,mul=0;
    printf("enter the number of array");
    scanf("%d",&n);
    a=(int*)malloc(n* sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be rotate=");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        l=a[0];
            for(j=0;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
        a[j]=l;
    }
    
    
    for(i=0;i<n;i++)
    
    {
        mul=i*a[i];
        count=count+mul;
    }
    printf("%d\n",count);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
-----------------------------------------------------------------------------------
output

-----------------------------------------------------------------------------------

enter the number of array5                                                                                                                                                         
1                                                                                                                                                                                  
2                                                                                                                                                                                  
3                                                                                                                                                                                  
4                                                                                                                                                                                  
5                                                                                                                                                                                  
enter the number to be rotate=2                                                                                                                                                    
25                                                                                                                                                                                 
34512   

