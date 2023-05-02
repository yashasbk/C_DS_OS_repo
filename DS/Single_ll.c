#include <stdio.h>
#include <stdlib.h>

typedef struct sll{
	int data;
	struct sll *next;
}sll;

void add_first(sll **head,int data)
{
	sll *node = malloc(sizeof(sll));
	if(node == NULL)
		printf("memory assignment failed\n");
	else
    {
		node->data = data;
		node->next = NULL;
		if(*head == NULL)
		{
			*head = node;
		}
		else
		{
			node->next = *head;
			*head = node;
		}
    }

}

void add_last(sll **head,int data)
{
	sll *node = malloc(sizeof(sll));
	if(node == NULL)
	{
		printf("Memory allocation failed\n");
	}
	else
	{
		if(*head == NULL)
		{
			*head = node;
		}
		else
		{
			node->data = data;
			node->next = NULL;
			sll *temp = *head;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = node;
			temp = NULL;
        }
    }
}

void delete_first(sll **head)
{
	if(*head == NULL)
	{
		printf("Nothing to delete\n");
	}
	else
	{
		sll *temp = *head;
		*head = (*head)->next;
        printf("Deleting %d\n",temp->data);
		free(temp);
	}
}

void delete_last(sll **head)
{
	if(*head == NULL)
	{
		printf("Nothing to delete\n");
	}
	else
	{
        if((*head)->next == NULL)
        {
            printf("Deleting %d\n",(*head)->data);
            free(*head);
        }
        else
        {
            sll *temp = *head;
            sll *prev = NULL;
		    while(temp->next != NULL)
		    {
                prev = temp;
			    temp = temp->next;
		    }
            printf("Deleting %d\n",temp->data);
		    free(temp);
		    prev->next = NULL;
        }

    }
}

void display(sll **head)
{
    if(*head == NULL)
    {
        printf("LL is empty\n");
    }
    else
    {
        sll *temp = *head;
        while(temp != NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

int main()
{
    char input = 0;
    int data = 0;
    sll *head = NULL;
    while(1)
    {
        printf("What do you want to do:\n1)Add node at first\n2)Add node at last\n3)Delete node at first\n4)Delete node at last\n5)Display data in nodes\n6)Exit\n");
        scanf("%hhd",&input);
        switch(input)
        {
            case 1:
                printf("Enter the data\n");
                scanf("%d",&data);
                add_first(&head,data);
                break;
            case 2:
                printf("Enter the data\n");
                scanf("%d",&data);            
                add_last(&head, data);
                break;
            case 3:
                delete_first(&head);
                break;
            case 4:
                delete_last(&head);
                break;
            case 5:
                display(&head);
                break;
            case 6:
                return 0;
            default:
                printf("Enter the option properly\n");
        }
    }
    return 0;
}
