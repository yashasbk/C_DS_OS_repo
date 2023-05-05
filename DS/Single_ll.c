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
	sll *node = (sll*)malloc(sizeof(sll));
	if(node == NULL)
	{
		printf("Memory allocation failed\n");
	}
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
			sll *temp = *head;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = node;
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

int len(sll *head)
{
    int count = 0;
    while(head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

void reverse_ll(sll **head)
{
    sll *start,*end;
    int temp = 0;
    start=end=*head;
    int i=0,j=len(*head)-1,k = 0;
    while(i<j)
    {
        k = 0;
        end = *head;
        while(k < j)
        {
            end = end->next;
            k++;
        }
        temp = start->data;
        start->data = end->data;
        end->data = temp;
        start = start->next;
        i++;
        j--;
    }
}

void reverse_link(sll **head)
{
    sll *prev,*next;
    prev = NULL;
    while(*head != NULL)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }
    *head = prev;
}

void delete_alternate_node(sll **head)
{
    if(*head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        sll *prev = *head;
        sll *next = (*head)->next;
        while (prev != NULL && next != NULL)
        {
            prev->next = next->next;
            free(next);
            prev = prev->next;
            if (prev != NULL)
            {
                next = prev->next;
            }
        }
    }
}

int main()
{
    char input;
    char c;
    int data = 0;
    sll *head = NULL;
    while(1)
    {
        printf("What do you want to do:\n1)Add node at first\n2)Add node at last\n3)Delete node at first\n"
        "4)Delete node at last\n5)Display data in nodes\n6)Reverse LL\n"
        "7)Revese next\n8)Delete Alternative node\n9)length of ll\nq)Exit\n");
        input = getchar();
        while ((c = getchar()) != '\n' && c != EOF);
        switch(input)
        {
            case '1':
                printf("Enter the data\n");
                scanf("%d",&data);
                add_first(&head,data);
                break;
            case '2':
                printf("Enter the data\n");
                scanf("%d",&data);            
                add_last(&head, data);
                break;
            case '3':
                delete_first(&head);
                break;
            case '4':
                delete_last(&head);
                break;
            case '5':
                display(&head);
                break;
            case '6':
                reverse_ll(&head);
                break;
            case '7':
                reverse_link(&head);
                break;
            case '8':
                delete_alternate_node(&head);    
                break;
            case '9':
                printf("Length is %d\n",len(head));
                break;
            case 'q':
                return 0;
            default:
                printf("Enter the option properly\n");
        }
    }
    return 0;
}
