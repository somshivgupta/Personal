#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	struct node *left;
	int data;
	struct node *right;
}node;

struct node *create()
{
	int item;
	struct node *temp;
	temp = malloc(sizeof(node));
	printf("enter the data you want to insert : ");
	scanf("%d",&item);
	if(item == -1)
	{
		return 0;
	}
	temp -> data = item;
	printf("enter the left side of %d",item);
	temp -> left = create();
	printf("enter the right side of %d",item);
	temp -> right = create();
	return temp;
} 

int inorder(struct node *root)
{
	if(root == 0)
	{
		return 0;
	}
	inorder(root -> left);
	printf("%d",root -> data);
	inorder(root -> right);
}

int postorder(struct node *root)
{
	if(root == 0)
	{
		return 0;
	}
	postorder(root -> left);
	postorder(root -> right);
	printf("%d",root -> data);
}

int preorder(struct node *root)
{
	if(root == 0)
	{
		return 0;
	}
	printf("%d",root -> data);
	preorder(root -> left);
	preorder(root -> right); 
}

void main()
{
	int choice;
	struct node *root;
	root = create();

	while(1)
	{
		printf("Enter your choice");
		printf("1.Preorder Traversal\n"
			"2.Inorder Traversal\n"
			"3.Postorder Traversal\n"
			"4.Exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			preorder(root);
			break;

			case 2:
			inorder(root);
			break;

			case 3:
			postorder(root);
			break;

			case 4:
			exit(0);

			default:
			printf("Invalid Order");
		}
	}


}
