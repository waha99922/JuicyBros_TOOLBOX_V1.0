#include <iostream>
#include "linklist.h"

using namespace std;

node::node()
    {
     next=NULL;
    }

node::node(double value)
    {
     data=value;
     next=NULL;
    }

LL::LL()
    {
     head=NULL;
    }

void LL::insert_at_head(double value)
{
 node *ptr=new node;
 ptr->data=value;
 if(head==NULL)
 {
    head=ptr;
 }
 else
 {
     ptr->next=head;
     head=ptr;
 }
}


void LL::insert_at_tail(double value)
{
    node *ptr=new node;
    ptr->data=value;
    if(head==NULL)
    {
      head=ptr;
    }
    else
    {
    node *temp=head;
    while(temp->next!=NULL)
    {
     temp=temp->next;
    }
    temp->next=ptr;
    }

}

void LL::print()
{
    if(head==NULL)
    {
        cout<<"No data"<<endl;
    }
    else
    {
      node *temp=head;
  while(temp!=NULL)
  {
   cout<<temp->data<<endl;
   temp=temp->next;
  }
    }


}

node *LL::search_key(double key)
	{
		node *temp=head;
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

void LL::insert_after(double value,double key)
{
    node *ptr=new node(value);
    ptr->next=NULL;
    node *temp=search_key(key);
    if(head==NULL)
    {
     cout<<"NOT FOUND "<<endl;
    }
    else
    {
    ptr->next=temp->next;
    temp->next=ptr;
    }

}

void LL::insert_before(double d,double key)
{
    node *n=new node;
	n->data=d;
	if (head->data==key)
	{
		n->next=head;
		head=n;
	}
	else
    {
		node *temp=head;
		node *temp1=head;
		int i=0;
		int t=0;

		while (temp!=NULL)
		{
			i++;
			if(temp->data==key)
			{
				t++;
				n->next = temp;
				temp1->next = n;
				break;
			}
			temp=temp->next;
			if(i>1)
			{
				temp1=temp1->next;
			}
		}
		if(t==0)
		{
			cout<<"Key not found"<<endl;
		}
	}
}

void LL::delete_at_head()
{
   node *temp=head;
   head=head->next;
   delete temp;
}

void LL::delete_at_tail()
{
   node *temp1=head->next;
   node *temp2=head;
   if(head->next==NULL)
   {
    delete_at_head();
   }
   else
   {
     while(temp1->next!=NULL)
     {
      temp1=temp1->next;
      temp2=temp2->next;
     }
     temp2->next=temp1->next;
     delete temp1;
   }
}

void LL::delete_after(double value)
{
   node *temp=search_key(value);
   if(temp!=NULL&&temp->next!=NULL)
   {
    node *temp1=temp->next;
    temp->next=temp1->next;
    delete temp1;
   }
   else
   {
       cout<<"Value Not Found "<<endl;
   }

}

void LL::delete_any_position(double value)
{
   node *temp=head->next;
   node *temp1=head;
   bool flag=false;
   if(head->data==value)
   {
    delete_at_head();
   }
   else
   {
   while(temp1->next!=NULL)
   {
    if(temp->data==value)
    {
      if(temp->next==NULL)
      {
       flag=true;
       delete_at_tail();
      }
      else
      {
       flag=true;
       temp1->next=temp->next;
       delete temp;
       break;
      }
    }
    else
    {
      temp=temp->next;
      temp1=temp1->next;
    }
    if(flag==false)
    {
    cout<<"Value is not Found "<<endl;
    }
    }
   }

}
