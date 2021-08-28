#include<stdio.h>
#include<stdlib.h>
int NUM_NODES=1,tree[10000],r=1;
struct node
{
    int number;
    struct node *left;
    struct node *right;
};

typedef struct node NODE;
NODE* create()
{
    NODE *root;
    int data;
    printf("Enter data for node: (Enter -1 for no node):");
    scanf("%d", &data);
    if(data != -1)
    {
        NUM_NODES++;
        tree[r++]=data;
        root = (NODE *)malloc(sizeof(NODE));
        root->number = data;
    }
    else
        return NULL;
    printf("\nEnter the left child of %d\n",root->number);
    root->left=create();
    printf("\nEnter the right child of %d\n", root->number);
    root->right=create();
    return root;
}

#define PARENT(i) ((i-1) / 2)
#define LINE_WIDTH 100
/*Printing the tree looks like actual tree*/
void Print()
{
    int print_pos[NUM_NODES];
    int i, j, k, pos, x=1, level=0;

    print_pos[0] = 0;
    for(i=0,j=1; i<NUM_NODES; i++,j++) {
        pos = print_pos[PARENT(i)] + (i%2?-1:1)*(LINE_WIDTH/(pow(2,level+1))+1);

        for (k=0; k<pos-x; k++) printf("%c",i==0||i%2?' ':'-');
        if(i<NUM_NODES-1)printf("%d",tree[i+1]);

        print_pos[i] = x = pos+1;
        if (j==pow(2,level)) {
            printf("\n");
            level++;
            x = 1;
            j = 0;
        }
    }
}

void preorder(NODE *ptr)
{
    if(ptr==NULL)
       return;
    printf("%5d", ptr->number);
    preorder(ptr->left);
    preorder(ptr->right);
}

void postorder(NODE *ptr)
{
    if(ptr==NULL)
        return;
    postorder(ptr->left);
    postorder(ptr->right);
    printf("%5d",ptr->number);
}

void inorder(NODE *ptr)
{
    if(ptr==NULL)
        return;
    inorder(ptr->left);
    printf("%5d",ptr->number);
    inorder(ptr->right);
}

int main()
{
    NODE *ROOT;
    ROOT=create();
    printf("The given tree :\n");
    Print();
    printf("\nTree in preorder traversal :\n");
    preorder(ROOT);
    printf("\nTree in postorder traversal :\n");
    postorder(ROOT);
    printf("\nTree in inorder traversal :\n");
    inorder(ROOT);
    printf("\n");
    free(ROOT);
    return 0;
}
