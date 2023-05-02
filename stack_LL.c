#include<stdio.h>

#include<stdlib.h>
typedef struct nodetype{
    int info;
    struct nodetype *next;
}node;
create_empty_list(node **head)
{
   *head=NULL; 
}

void insert_at_begining(node **head , int item)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;
    if(*head==NULL)
    {
     ptr->next=NULL;
     *head=ptr;
    }
    else
    {
        ptr->next=*head;
        *head=ptr;
    }
}
void delete_from_begining(node **head )
{
    node *ptr;
    if(*head==NULL)
    {
        return;
    }
    else
    {
        ptr=*head;
        *head=(*head)->next;
        free(ptr);
    }

}
