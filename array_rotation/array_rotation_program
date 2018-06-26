
#include <stdio.h>
#include <stdlib.h>
void rotate(int a[],int m,int n)
{
    int i,j,save;
    for(i=0;i<m;i++)
    {
        save=a[0];
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[j]=save;
        
    }
    
    
}

int main()
{
    int *a,i,j,k,l,n,m;
    printf("enter the array number=");
    scanf("%d",&n);
    a=(int*)malloc(n* sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to rotate=");
    scanf("%d",&m);
    rotate(a,m,n);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
----------------------------------------------------------------------------------------------
the output for the program 
----------------------------------------------------------------------------------------------
enter the array number=5                                                                                                                                                           
1                                                                                                                                                                                  
2                                                                                                                                                                                  
3                                                                                                                                                                                  
4                                                                                                                                                                                  
5                                                                                                                                                                                  
enter the number to rotate=3                                                                                                                                                       
45123    
