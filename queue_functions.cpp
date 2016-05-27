#include"queue.h"
#include"array.h"
#include<iostream>
using namespace std;

Myarraylist m;

Queue::Queue(int s)
{
    size=s;
}
Queue::Queue()
{
    size=1000;
}


void Queue::n_queue(double value)
{
  if(m.count<=size-1)
  {
  m.insert_at_end(value);
  cout<<endl<<"Value is inserted";
  }
  else
  {
   cout<<"Can't Inserted because Queue is Already Full"<<endl;
  }
}

double Queue::d_queue()
{
  if(m.count==0)
  {
   cout<<"\nQueue is Empty"<<endl;
  }
  else
  {
  m.delete_from_begin();
  cout<<"Dequeued";
  }
}

void Queue::Display()
{
  if(m.count==0)
  {
  cout<<"\nQueue is Empty"<<endl;
  }
  else
  {
  m.print();
  }
}
