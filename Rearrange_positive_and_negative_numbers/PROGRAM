#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,i,j,k,l,n,save;
    printf("enter the elements=");
    scanf("%d",&n);
    a=(int*)malloc(n* sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        save=a[i];
        if(save>0)
        {
            continue;
        }
        j=i-1;//
        while(a[j]>0 && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=save;    
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
-------------------------------------------------------------------------------------
this is the output for the program
-------------------------------------------------------------------------------------
enter the elements= 5                                                                                                                                                               
1                                                                                                                                                                                  
2                                                                                                                                                                                  
3                                                                                                                                                                                  
-4                                                                                                                                                                                 
-5                                                                                                                                                                                 
-4-5123
