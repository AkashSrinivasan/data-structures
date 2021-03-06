 /* reversing the linked list */
 #include <stdio.h>
#include <string.h>
struct node {
    int data;
    struct node *next;
};

int main()
{
    int i,n;
    struct node *a,*head,*prev;
    printf("eter the number of the node=");
    scanf("%d==",&n);
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
        prev=a;
    }
   
    struct node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL; 

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode; 

        printf("SUCCESSFULLY REVERSED LIST\n");
    }
     while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }

    return 0;
}



output
--------------------------------------------------------------------------------------
eter the number of the node=5                                                                                                                                                       
1                                                                                                                                                                                   
2                                                                                                                                                                                   
3                                                                                                                                                                                   
4                                                                                                                                                                                   
5                                                                                                                                                                                   
SUCCESSFULLY REVERSED LIST                                                                                                                                                          
54321
