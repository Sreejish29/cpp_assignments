#include<iostream>
using namespace std;

void PreOrder();
void InOrder();
void PostOrder();

class LinkedList
{
public:
	int data;
	LinkedList *left;
	LinkedList *right;
};

void PreOrder(LinkedList *n)
{
	if (n != NULL)
	{
	cout<<n->data<<" ";
	PreOrder(n->left);
	PreOrder(n->right);
	}
}

void InOrder(LinkedList *n)
{
	if (n != NULL)
	{
	InOrder(n->left);
	cout<<n->data<<" ";
	InOrder(n->right);
	}
}

void PostOrder(LinkedList *n)
{
	if (n != NULL)
	{
	PostOrder(n->left);
	PostOrder(n->right);
	cout<<n->data<<" ";
	}
}


int main()
{
	LinkedList *root = new LinkedList();
	LinkedList *first = new LinkedList();
	LinkedList *second = new LinkedList();
	LinkedList *third = new LinkedList();
	LinkedList *fourth = new LinkedList();

	root->data=10;
	root->left = first;
	root->right = second;

	first->data = 20;
	first->left = third;
	first->right = fourth;

	second->data = 30;
	second->left =NULL;
	second->right = NULL;

	third->data = 40;
	third->left =NULL;
	third->right = NULL;

	fourth->data = 50;
	fourth->left =NULL;
	fourth->right = NULL;

	cout<<"Preorder traversal of tree is: ";
	PreOrder(root);
	cout<<endl<<"Inorder traversal of tree is: ";
	InOrder(root);
	cout<<endl<<"Postorder traversal of tree is: ";
	PostOrder(root);

	return 0;

}