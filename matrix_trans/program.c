Question asked in zoho internship question 
#include<stdio.h>
int main()
{
    int a[10][10],p[10][10],i,j,k,m,n;
    printf("enter the rows and coloumn\n");
    scanf("%d%d",&m,&n);
    printf("enter the value for the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            p[j][i]=a[i][j];
        }
    }
    printf("ans\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
----------------------------------------------------------------------------------------------
the output is
----------------------------------------------------------------------------------------------
enter the rows and coloumn                                                                                                                                                          
4                                                                                                                                                                                   
4                                                                                                                                                                                   
enter the value for the matrix                                                                                                                                                      
1                                                                                                                                                                                   
2                                                                                                                                                                                   
3                                                                                                                                                                                   
4                                                                                                                                                                                   
5                                                                                                                                                                                   
6 
7
8
9
10
11
12
13
14
15
16


ans                                                                                                                                                                                
1 5 9 13                                                                                                                                                                            
2 6 10 14                                                                                                                                                                           
3 7 11 15                                                                                                                                                                           
4 8 12 16 
