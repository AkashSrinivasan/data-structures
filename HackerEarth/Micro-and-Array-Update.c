/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int smallest(int a[],int m,int l)
{ 
    l = a[0];
    for(int i=0;i<m;i++)
    {
        
        if(a[i]<l){
            l = a[i];
        }
    }
    return l;
}
int addition(int a[],int s,int m,int o){
    int panni = 0;
    for(int i=s;i<o;i++){
        panni++;
    }
    return panni;
}

int main()
{
    int i=0,l=0;
    long long int n,m,o;
    scanf("%d",&n);
    while(i<n){
        scanf("%d %d",&m,&o);
        int a[1000000];
        for(int k=0;k<m;k++){
            scanf("%d",&a[k]);
        }
        int s = smallest(a,m,l);
       
        int add = addition(a,s,m,o);
        printf("%d\n",add);
        i++;
    }

    return 0;
}
