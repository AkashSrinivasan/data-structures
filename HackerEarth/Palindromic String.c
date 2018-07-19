#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int temp=0,len,n;
    scanf("%s",&a);
    len=strlen(a)-1;
    
    while(len>temp)
    {
        if(a[temp++]!=a[len--])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
