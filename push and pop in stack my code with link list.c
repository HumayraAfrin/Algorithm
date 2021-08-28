#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

typedef struct node NODE;
NODE *top,*top1,*temp;
int count;

void create()   ///Create a null stack
{
    top=NULL;
}

void push(int num)   /// Push item into stack
{
        if(top ==NULL)
        {
                top = (NODE *)malloc(sizeof(NODE));
                top->info = num;
                top->link = NULL;
        }
        else
        {
                temp = (NODE *)malloc(sizeof(NODE));
                temp->info = num;
                temp->link = top;
                top = temp;
        }
        count++;
}

void pop()   ///Pop item from stack
{
        top1=top;
        if(top1 == NULL)
        {
            printf("UNDERFLOW\n");
            exit(0);
        }
        else top1=top1->link;
        printf("Popped value is : %d",top->info);
        free(top);
        top = top1;
        count--;
}

void display()   /// display stack items
{
        top1 = top;
        if(top1 == NULL)
        {
            printf("Stack is empty\n");
            return;
        }
        else
        {
            while(top1 !=NULL)
            {
                printf("%d ",top1->info);
                top1 = top1->link;
            }
        }
}

int main()
{
    create();
    printf("\n 1 - push");
    printf("\n 2 - pop");
    printf("\n 3 - display");
    printf("\n 4 - item present");
    printf("\n 5 - exit");
    int num,ch;
    while(1)
    {
        printf("\n\nEnter choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter value :");
                scanf("%d",&num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Item present in the stack now are in number : %d",count);
                break;
            case 5:
                exit(0);
        }
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
};
typedef struct node NODE;
NODE *top,*top1,*temp;
int count;

void create()
{
    top = NULL;
}
void push(int data)
{
    if (top == NULL)
    {
        top =(NODE *)malloc(sizeof(NODE));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(NODE *)malloc(sizeof(NODE));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

void display()
{
    top1 = top;
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 }

void pop()
{
    top1 = top;
    if (top1 == NULL)
    {
        printf("UNDERFLOW\n");
        exit(0);
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value : %d", top->info);
    free(top);
    top = top1;
    count--;
}
int main()
{
    int no, ch;
    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Exit");
    printf("\n 4 - Dipslay");
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            exit(0);
        case 4:
            display();
            break;
        }
    }
    return 0;
}*/
