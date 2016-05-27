#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include"array.h"


class stack
{
public:
    int size;
    int top;
    stack();
    stack(int s);
    void push(double);
    void pop();
    void display();
};

#endif // STACK_H_INCLUDED
