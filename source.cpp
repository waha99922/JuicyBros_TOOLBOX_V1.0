#include <iostream>
#include "toolbox.h"

using namespace std;

calculator::calculator()
{
    num1=0;
    num2=0;
    result=0;
}
calculator::calculator(double a,double b)
{
    num1=a;
    num2=a;
    result=0;
}
void calculator::set_num1(double a)
{
    num1=a;
}
double calculator::get_num1()
{
    return num1;
}
void calculator::set_num2(double b)
{
    num2=b;
}
double calculator::get_num2()
{
    return num2;
}

/****/

void calculator::set_num3(double c)
{
    num3=c;
}
double calculator::get_num3()
{
    return num3;
}

void calculator::set_num4(double d)
{
    num4=d;
}
double calculator::get_num4()
{
    return num4;
}

/*****/

double calculator::sum()
{
    result=num1+num2;
    return result;
}
double calculator::difference()
{
    result=num1-num2;
    return result;
}
double calculator::multi()
{
    result=num1*num2;
    return result;
}
double calculator::divide()
{
    result=(num1)/(num2);
    return result;
}

double calculator::mode(double *array, int size)
{
        array=new double[size];
        int counter=1;
        int max=0;
        int mode=array[0];
        for (int pass=0;pass<size-1;pass++)
        {
           if ( array[pass] == array[pass+1] )
           {
              counter++;
              if ( counter > max )
              {
                  max = counter;
                  mode = array[pass];
              }
           }
           else
              counter = 1; // reset counter.
        }
        mode=100;
    return mode;
}
