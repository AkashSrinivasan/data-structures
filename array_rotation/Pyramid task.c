
#include <stdio.h>

int main()
{
    int a[100];
    int i,j,num;
    printf("enter the number of array");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        a[i]= i+1;
    }
   printf("enter the number u want=");
   int n;
   scanf("%d",&n);

   for(i=0;i<n;i++){
        int p = a[0];
           for(j=0;j<num-1;j++){
                 a[j]= a[j+1];
            }
        a[j] = p;
   }
    
  
   for(i=0;i<num;i++){
       printf("%d\n",a[i]);
   }

    return 0;
}
