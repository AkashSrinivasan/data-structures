#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i,n;
    scanf("%s",a);
    n=strlen(a);
    i=0;
    while(i<n)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]-=32;
            
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
        printf("%c",a[i]);
        i++;
    }
}
