#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
class nodeDLL
{
 public:
     int data;
     nodeDLL* next;
     nodeDLL* prev;
     nodeDLL();
     nodeDLL(int );
};


#endif // NODE_H_INCLUDED
