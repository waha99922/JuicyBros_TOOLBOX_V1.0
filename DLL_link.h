#ifndef LINK_H_INCLUDED
#define LINK_H_INCLUDED
#include "DLL_node.h"
class double_Link_List
{
public:
    nodeDLL* head;
    double_Link_List();
    void Insert_at_head(double );
    void Insert_at_tail(double  );
    void insert_after(double  ,double  );
    void insert_before(double  ,double  );
    bool search_value(double );
    void delete_head();
    void delete_tail();
    void delete_after(double  );
    void delete_before(double  );
    void print();
    nodeDLL* search(double  );
    void reverse_print();
};


#endif // LINK_H_INCLUDED
