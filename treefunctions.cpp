#include <iostream>
#include "Tree.h"
using namespace std;

Tree::Tree()
{
	root = NULL;
}
void Tree::insert(double value)
{
	Tnode* ptr = new Tnode(value);
	Tnode* temp = root;
	if (root == NULL)
	{
		root = ptr;
	}
	else
	{
		while (temp != NULL)
		{
			if (temp->data > value && temp->left == NULL)
			{
				temp->left = ptr;
				break;
			}
			else if (temp->data < value && temp->right == NULL)
			{
				temp->right = ptr;
				break;
			}
			else if (temp->data > value && temp->left != NULL)
			{
				temp = temp->left;
			}
			else if (temp->data < value && temp->right != NULL)
			{
				temp = temp->right;
			}

		}
	}

}

Tnode* Tree::Inorder_print(Tnode* temp)
{
	if (temp == NULL)
	{
		return NULL;
	}
	else
	{
		Inorder_print(temp->left);
		cout << temp->data <<endl;
		Inorder_print(temp->right);
	}

}
Tnode* Tree::Postorder_print(Tnode* temp)
{
	if (temp == NULL)
	{
		return NULL;
	}
	else
	{
		Postorder_print(temp->left);
		Postorder_print(temp->right);
		cout << temp->data <<endl;
	}
}

Tnode* Tree::Preorder_print(Tnode* temp)
{
	if (temp == NULL)
	{
		return NULL;
	}
	else
	{
		cout << temp->data <<endl;
		Preorder_print(temp->left);
		Postorder_print(temp->right);
	}
}

Tnode* Tree::search(Tnode* temp,double key)
{
	if (temp == NULL)
	{
		return NULL;
	}
	else if (temp->data == key)
	{
		return temp;
	}
	else if (key < temp->data)
	{
		search(temp->left, key);
	}
	else if (key>temp->data)
	{
		search(temp->right, key);
	}
}


