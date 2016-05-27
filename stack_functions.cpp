#include"stack.h"
#include"array.h"
#include<iostream>
using namespace std;

Myarraylist mano_bhai;
stack::stack()
{
        Myarraylist(1000);
        size=1000;
        top=-1;
}

stack::stack(int s)
{
        Myarraylist(1000);
        size=1000;
        top=-1;
}

void stack::push(double val)
{
    if(top<=size)
    {
        mano_bhai.insert_at_end(val);
        top++;
        cout<<endl<<"Value is pushed"<<endl;
    }
    else
    {
        cout<<"stack is full"<<endl;
    }
}

void stack::pop()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;

    }
    else
    {
        mano_bhai.delete_at_end();
        top--;
        cout<<"Value is poped"<<endl;
    }
}

void stack::display()
{
    mano_bhai.print();
    cout<<endl;
}
