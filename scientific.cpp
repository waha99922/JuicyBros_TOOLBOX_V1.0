#include <iostream>
#include "toolbox.h"
#include <math.h>
using namespace std;

double calculator::cosine()
{
    result=cos((num1*3.14159265)/180);
    return result;
}

double calculator::sine()
{
    result=sin((num1*3.14159265)/180);
    return result;
}

double calculator::tangent()
{
    result=tan((num1*3.14159265)/180);
    return result;
}

double calculator::cosine_h()
{
    result=cosh(num1);
    return result;
}

double calculator::sine_h()
{
    result=sinh(num1);
    return result;
}

double calculator::tangent_h()
{
    result=tanh(num1);
    return result;
}

double calculator::square_root()
{
    result=sqrt(num1);
    return result;
}
double calculator::power()
{
    result=pow(num1,num2);
    return result;
}
void calculator::matrix_addition()
{
   int m,n,first[10][10],second[10][10],sum[10][10];
   cout<<"Enter the number of rows and columns of matrix:";
   cin>>m>>n;
   cout<<"Enter the elements of first matrix"<<endl;

   for(int c=0;c<m;c++)
   {
       for(int d=0;d<n;d++)
       {
           cin>>first[c][d];
       }
   }
   cout<<"Enter the elements of second matrix"<<endl;

   for(int c=0;c<m;c++)
   {
       for(int d=0;d<n;d++)
      {
          cin>>second[c][d];
      }
   }
   /**adding elements of arrays**/
   for(int c=0;c<m;c++)
   {
       for(int d=0;d<n;d++)
      {
          sum[c][d]=first[c][d]+second[c][d];
      }
   }
   cout<<"Sum:-"<<endl;
   for(int c=0;c<m;c++)
   {
      for(int d=0;d<n;d++)
      {
          cout<<sum[c][d]<<"\t";
      }
      cout<<endl;
   }
}

void calculator::matrix_subtraction()
{
    int m,n,first[10][10],second[10][10],difference[10][10];
   cout<<"Enter the number of rows and columns of matrix:";
   cin>>m>>n;
   cout<<"Enter the elements of first matrix"<<endl;

   for(int c=0;c<m;c++)
   {
       for(int d=0;d<n;d++)
       {
           cin>>first[c][d];
       }
   }
   cout<<"Enter the elements of second matrix"<<endl;

   for(int c=0;c<m;c++)
   {
       for(int d=0;d<n;d++)
      {
          cin>>second[c][d];
      }
   }
   /**adding elements of arrays**/
   for(int c=0;c<m;c++)
   {
       for(int d=0;d<n;d++)
      {
          difference[c][d]=first[c][d]-second[c][d];
      }
   }
   cout<<"Difference:-"<<endl;
   for(int c=0;c<m;c++)
   {
      for(int d=0;d<n;d++)
      {
          cout<<difference[c][d]<<"\t";
      }
      cout<<endl;
   }
}
