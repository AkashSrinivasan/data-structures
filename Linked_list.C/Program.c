#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
int main()
{
    struct node *a,*head,*prev;
    int i,n;
    printf("enter the number to be insert");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        a=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&a->data);
        a->next=NULL;
        if(head==NULL)
        {
            head=a;
        }
        else
        {
            prev->next=a;
        }
        prev=a;//go to previous stage 
    }
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }

    return 0;
}
