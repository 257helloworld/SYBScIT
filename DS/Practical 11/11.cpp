/* Write a program to perform binary tree(preorder,inorder and postorder) */
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *left, *right;
};
Node *newNode(int data)
{
	Node* temp=new Node;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void printPostOrder(struct Node* node)
{
	if(node==NULL)
		return;
	printPostOrder(node->left);
	printPostOrder(node->right);
	cout<<node->data<<" ";
}
void printInOrder(struct Node* node)
{
	if(node==NULL)
		return;
	printInOrder(node->left);
	cout<<node->data<<" ";
	printInOrder(node->right);
}
void printPreOrder(struct Node* node)
{
	if(node==NULL)
		return;
	cout<<node->data<<" ";
	printPreOrder(node->left);
	printPreOrder(node->right);
}
int main()
{
    cout << "----------Binary Tree----------";
    cout << "\nPreorder, Inorder & Postorder";
	struct Node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->right->right=newNode(5);
	cout<<"\n\nPreorder Traversal of Binary Tree is: ";
	printPreOrder(root);
	cout<<"\nInorder Traversal of Binary Tree is: ";
	printInOrder(root);
	cout<<"\nPostorder Traversal of Binary Tree is: ";
	printPostOrder(root);
    cout << "\n";
}