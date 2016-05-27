#include <iostream>
#include "array.h"

using namespace std;

Myarraylist::Myarraylist()
{
	count=0;
	size=0;
	arr=new int[size];
}

Myarraylist::Myarraylist(int a)
{
	count=0;
	size=a;
	arr=new int[size];
}

void Myarraylist::shiftright(double a)
{
   int b=count-1;
   for(int i=b;i>=a+1;i--)
   {
	  arr[i+1]=arr[i];
   }
}

void Myarraylist::shiftleft(double a)
{
    for(int i=a;i<count;i++)
	{
	arr[i]=arr[i+1];
	}
}

bool Myarraylist::search(double num)
{
	int i=0;
	for (i=0;i<size;i++)
	{
		if (arr[i] == num)
		return true;
	}
	return num;
}

void Myarraylist::checkbound()
	{
	   if(count==-1 )
        {
            cout<<"Empty"<<endl;
            return ;
        }
        else if(count==size-1)
        {
            cout<<"Full"<<endl;
            return ;
        }
	}


void Myarraylist::insert_at_begin(double num)
{
	//checkbound();
	shiftright(-1);
	arr[0] = num;
	count++;
}

void Myarraylist::insert_at_end(double num)
{
   // checkbound();
	arr[count] = num;
	count++;
}

void Myarraylist::insert_after(double num)
{
    double n;
    checkbound();
	int a=search(num);
	shiftright(a);
	cout<<"Enter number you want to enter in array"<<endl;
	cin>>n;
	arr[a+1]=n;
	count++;
}

void Myarraylist::delete_from_begin()
{
    //checkbound();
	shiftleft(0);
	count--;
}

void Myarraylist::delete_at_end()
{
    //checkbound();
	arr[count-1]=-1;
	count--;
}

void Myarraylist::delete_from_index(int a)
{
    checkbound();
	shiftleft(a);
	count--;
}

void Myarraylist::size_extent(int a)
{
	int newsize=size+a;
	int *temparr=new int[newsize];
	for(int i=0;i<size;i++)
	{
		temparr[i]=arr[i];
	}
	delete[] arr;
	arr=temparr;
	size=newsize;
}

void Myarraylist::print()
{
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}

void Myarraylist::reverse()
{
	int start=0;
	int end=count-1;
	for(int i=0;i<=end/2;i++)
	{
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
	}
}

Myarraylist::~Myarraylist()
{
	delete []arr;
}
