#include "DLL_node.h"
#include <cstddef>
using namespace std;

nodeDLL::nodeDLL()
{
 data=0;
 next=NULL;
 prev=NULL;
}
nodeDLL::nodeDLL(int value)
{
 data=value;
 next=NULL;
 prev=NULL;
}
