/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
