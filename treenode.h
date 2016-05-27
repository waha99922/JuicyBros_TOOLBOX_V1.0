#ifndef TREENODE_H_INCLUDED
#define TREENODE_H_INCLUDED

#include <iostream>

using namespace std;

class Tnode
{
public:
	int data;
	Tnode* left;
	Tnode* right;
	Tnode();
	Tnode(int);
};

#endif // TREENODE_H_INCLUDED
