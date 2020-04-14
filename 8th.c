#include<stdio.h>
#include<stdlib.h>
/*****BY Aman Gupta*****/
/*Creation of Tree and traversal of node*/
struct node
{
	struct node *lchild;
	struct node *rchild;
	int data;
}*root=NULL;

struct node *createTree()
{
	int x;
	scanf("%d",&x);

	if(x==-1)
	return NULL;

	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=x;
	p->lchild=p->rchild=NULL;
	
	printf("Enter the left child of %d\n",p->data);
	p->lchild=createTree();
	printf("Enter the right child of %d\n",p->data);
	p->rchild=createTree();
	return p;	
}

int height(struct node *p)
{
	int x,y;
	if(p==NULL)
		return 0;
	if(p->rchild==NULL&&p->lchild==NULL)
		return 0;
	x=height(p->lchild);
	y=height(p->rchild);
	return x>y?x+1:y+1;
}

struct stnode
{
	struct node *tdata;
	struct stnode *link;
}*top=NULL;


void push(struct node *p)
{
	struct stnode *t;
	t=(struct stnode*)malloc(sizeof(struct stnode));
	t->tdata=p;
	t->link=top;
	top=t;
}

struct node *pop()
{
	struct stnode *t=top;
	struct node *p=top->tdata;
	top=top->link;
	free(t);
	return p;
}

int isempty()
{
	if(top==NULL)
		return 1;
	else
		return 0;
}

void inorder(struct node *p)//Iterative version
{
	while(p!=NULL||!isempty())
	{
		if(p!=NULL)
		{
			push(p);
			p=p->lchild;
		}
		else
		{
			p=pop();
			printf("%d ",p->data);
			p=p->rchild;
		}
	}
}

int main()
{
	int x;
	printf("Enter the data of nodes of the tree (-1 for no input)\n");

	printf("Enter the root element\n");
	root=createTree(root);
	printf("\nHeight of tree is\n");
	printf("%d",height(root));
	printf("\nInorder traversal of tree is\n");
	inorder(root);

	return 0;
}