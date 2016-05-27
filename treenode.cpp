#include <iostream>
#include "treenode.h"
using namespace std;
Tnode::Tnode()
{
	data = 0;
	left = NULL;
	right = NULL;
}
Tnode::Tnode(int d)
{
	data = d;
	left = NULL;
	right = NULL;
}
