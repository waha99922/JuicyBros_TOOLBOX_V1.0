#include <iostream>
#include "DLL_link.h"
#include "DLL_node.h"
#include <cstddef>
using namespace std;

double_Link_List::double_Link_List()
{
	head = NULL;
}
void double_Link_List::Insert_at_head(double  value)
{
   nodeDLL* ptr=new nodeDLL(value);
   if(head==NULL)
   {
       head=ptr;
     //  ptr->next=head;
    // ptr->prev=head;
   }
   else
   {
       ptr->next=head;
       head->prev=ptr;
       head=ptr;

      /* node* temp=head;
       while(temp->next!=head)
       {
         temp=temp->next;
       }
       ptr->next=head;
       head->prev=ptr;
       head=ptr;
       ptr->prev=temp;
       temp->next=head;*/
   }
}
void double_Link_List::Insert_at_tail(double value)
{
  nodeDLL* temp=head;
  nodeDLL* ptr=new nodeDLL(value);
  if(head==NULL)
   {
       head=ptr;
   }
  else
  {
    while(temp->next!=NULL)
    {
     temp=temp->next;
    }
    ptr->prev=temp;
    temp->next=ptr;
  }
}
void double_Link_List::delete_head()
{
 if(head==NULL)
 {
  cout<<"Link List is Empty"<<endl;
 }
 else
 {
   nodeDLL* temp=head;
   if(temp->next==NULL)
   {
    head=NULL;
    delete temp;
   }
   else
   {
   head=temp->next;
   head->prev=NULL ;
   delete temp;
   head->prev=NULL ;
 }
 }
}
void double_Link_List::delete_tail()
{
    nodeDLL* temp=head;
    if(head==NULL)
    {
     cout<<"Link list is Empty"<<endl;
    }
    else if(temp->next==NULL)
    {
        delete temp;
        head=NULL;
    }
    else
    {
      while(temp->next!=NULL)
      {
       temp=temp->next;
      }
      nodeDLL* temp1=temp->prev;
      temp1->next=NULL;
      delete temp;
    }
}
void double_Link_List::insert_after(double  key,double  value)
{
  nodeDLL* ptr=new nodeDLL(value);
  nodeDLL* temp=search(key);
  if(temp==NULL)
  {
   cout<<"Not Found "<<endl;
  }
  else if (temp->next==NULL)
  {
    ptr->next=temp->next;
    ptr->prev=temp;
    temp->next=ptr;
  }
  else
  {
   nodeDLL* temp1=temp->next;
   ptr->next=temp->next;
   ptr->prev=temp;
   temp->next=ptr;
   temp1->prev=ptr;
  }
}
void double_Link_List::insert_before (double  key,double  value )
{
   nodeDLL* ptr=new nodeDLL(value);
   nodeDLL* temp=search(key);
   if(temp==NULL)
   {
   cout<<" Value Not Found"<<endl;
   }
   else if(temp==head)
   {
    ptr->next=head;
    temp->prev=ptr;
    head=ptr;
   }
   else
   {
    nodeDLL* temp1=temp->prev;
    ptr->next=temp1->next;
    ptr->prev=temp1;
    temp->prev=ptr;
    temp1->next=ptr;
   }
}
void double_Link_List::print()
{
    nodeDLL* temp=head;
    if(head==NULL)
    {
    cout<<"Link list is Empty"<<endl;
    }
    else
    {
    while(temp!=NULL)
    {
     cout<<temp->data<<endl;
     temp=temp->next;
    }
    }
}
void double_Link_List::reverse_print()
{
    nodeDLL* temp=head;
    if(head==NULL)
    {
     cout<<"Link List is Empty"<<endl;
    }
    else
    {
    while(temp!=NULL)
    {
     temp=temp->next;
    }
    while(temp->prev!=NULL)
    {
     cout<<temp->data<<endl;
     temp=temp->prev;
    }
    }
}
bool double_Link_List::search_value(double  key)
{
  nodeDLL* temp=head;
  while(temp!=NULL)
  {
   if(temp->data==key)
   {
    return true;
   }
   else
   {
    temp=temp->next;
   }
   }
   return false;
}
nodeDLL* double_Link_List::search(double  key)
{
    nodeDLL* temp=head;
    while(temp!=NULL)
    {
     if(temp->data==key)
     {
       return temp;
     }
     else
     {
     temp=temp->next;
     }
    }
    return NULL;
}
void double_Link_List::delete_after(double  value)
{
    nodeDLL* temp=search(value);
    nodeDLL* temp1=temp->next;
    if(temp==NULL)
    {
     cout<<"Value Not Found"<<endl;
    }
    else if(temp->next==NULL)
    {
     cout<<"No Value Exits After That Value"<<endl;
    }
    else if(temp1->next==NULL)
    {
     temp->next=temp1->next;
     temp1->prev=NULL;
     delete temp1;
    }
    else
    {
     temp->next=temp1->next;
     nodeDLL* temp2=temp1->next;
     temp2->prev=temp;
     delete temp1;
    }
}
void double_Link_List::delete_before(double  value)
{
 nodeDLL* temp=search(value);
 nodeDLL* temp1=temp->prev;
 if(temp==head)
 {
 cout<<"No Value Exist before That Value"<<endl;
 }
 else if(temp1->prev==NULL)
 {
  head=temp;
  temp->prev=NULL;
  delete temp1;
 }
 else
 {
  temp->prev=temp1->prev;
  nodeDLL* temp2=temp1->prev;
  temp2->next=temp1->next;
  delete temp1;
 }

}
