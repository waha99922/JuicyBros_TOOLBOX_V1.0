#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
#include "treenode.h"
using namespace std;

class Tree
{
public:
	Tree();
	Tnode* root;
	void insert(double data);
	Tnode* Inorder_print(Tnode*);
	Tnode* Postorder_print(Tnode*);
	Tnode* Preorder_print(Tnode*);
	Tnode* search(Tnode* temp,double key);
};



#endif // TREE_H_INCLUDED
