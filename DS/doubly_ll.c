#include <stdio.h>
#include <stdlib.h>

#define FAILED printf("Memory allocation failed\n")

typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
}dll;

void insert_first(dll **head, int data)
{
    dll *node = malloc(sizeof(dll));
    if(node == NULL)
    {
        FAILED;
    }
    else
    {
        node->data = data;
        node->next = NULL;
        node->prev = NULL;
        if(*head == NULL)
        {
            *head = node;
        }
        else
        {
            node->next = *head;
            *head = node;
            node->next->prev = node;
        }
    }
}

void insert_last(dll **head,int data)
{
    dll *node = malloc(sizeof(dll));
    if(node == NULL)
    {
        FAILED;
    }
    else
    {
        node->data = data;
        node->next = NULL;
        node->prev = NULL;
        if(*head == NULL)
        {
            *head = node;
        }
        else
        {
            dll *temp = *head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = node;
            node->prev = temp;
        }
    }
}

void delete_first(dll **head)
{
    if(*head == NULL)
    {
        printf("LL is empty\n");
    }
    else
    {
        dll *temp = *head;
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
}

void delete_last(dll **head)
{
    if(*head == NULL)
    {
        printf("LL is empty\n");
    }
    else
    {
        dll *temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        if(temp->prev != NULL)
        {
            temp->prev->next = NULL;
        }
        free(temp);
    }
}

void display(dll **head)
{
    if(*head == NULL)
    {
        printf("LL is empty\n");
    }
    else
    {
        dll *temp = *head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    dll *head = NULL;
    int data;
    insert_first(&head,4);
    insert_first(&head,5);
    insert_first(&head,6);
    insert_first(&head,7);
    insert_last(&head,8);
    insert_last(&head,9);
    insert_last(&head,10);
    insert_last(&head,11);
    display(&head);
    delete_last(&head);
    delete_first(&head);
    display(&head);
    return 0;
}