
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    int i,j ,count=0,m,n,temp=0;
    printf("enter the first string=");
    scanf("%s",&a);
    printf("enter the second string=");
    scanf("%s",&b);
    n=strlen(a);
    m=strlen(b);
    // if(n>m)
    // {
    //     temp=n;
    //     n=m;
    //     m=temp;
        
    // }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                count++;
                if(m==count)
                    {
                    printf("yes");
                    return 0;
                   
                    }
                
            }
            
        }
    }
    

        printf("no");


    return 0;
}
