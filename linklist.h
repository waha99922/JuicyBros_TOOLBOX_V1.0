#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

class node
{
     public:
     double data;
     /**double no_1;
     double no_2;
     char sign_1;
     char sign_equal;**/
     node *next;
     node();
     node(double value);

};

class LL
{
     public:
     node *head;
     LL();
     void insert_at_head(double value);
     void insert_at_tail(double value);
     void print();
     void insert_after(double value,double key);
     node *search_key(double v);
     void insert_before(double value ,double key);
     void delete_at_head();
     void delete_at_tail();
     void delete_after(double value);
     void delete_any_position(double value);

};


#endif // LINKLIST_H_INCLUDED
