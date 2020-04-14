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

int nodecount(struct node *p)
{
	if(p==NULL)
		return 0;
	else
		return 1+nodecount(p->lchild)+nodecount(p->rchild);
}



int main()
{
	int x;
	printf("Enter the data of nodes of the tree (-1 for no input)\n");

	printf("Enter the root element\n");
	root=createTree(root);
	printf("No. of nodes in the binary tree are\n");
	printf("%d",nodecount(root));
	

	return 0;
}