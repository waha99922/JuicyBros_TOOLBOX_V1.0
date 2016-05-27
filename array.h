#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

class Myarraylist
{
    public:
    int size=0;
	int count=0;
	int *arr;
	Myarraylist();
	Myarraylist(int );
	void shiftright(double);
	void shiftleft(double);
	bool search(double);
	void checkbound();
	void insert_at_begin(double);
	void insert_at_end(double);
	void insert_after(double);
	void delete_from_begin();
	void delete_at_end();
	void delete_from_index(int );
	void size_extent(int);
	void reverse();
	void print();
	~Myarraylist();
};

#endif // ARRAY_H_INCLUDED
