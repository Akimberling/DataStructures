/*
	Amber Kimberling
	10/15/18
	CMPS 385
*/
#ifndef ORDEREDLL
#define ORDEREDLL

template<class O>
class ORDEREDLLPTR
{
private:
	struct NODE
	{
		O info;
		NODE *next;
	};
	NODE *list;

public:
	ORDEREDLLPTR() { list = NULL; }
	void insert(O x)
	{
		NODE *p = list, *q = list, *r;

		r = new(NODE);
		r->info = x;
		r->next = NULL;
		
		while (p != NULL && x > p->info)
		{
			q = p;
			p = p->next;
		}
		if (p == list) 
		{
			list = r;
			r->next = p;
		}
		else if (p == NULL)
		{
			q->next = r;
		}
		else
		{
			r->next = p;
			q->next = r;
		}
	}
	void display()
	{
		NODE *p = list;
		while (p != NULL)
		{
			cout << p->info << "-->";
			p = p->next;
		}
		cout << "NULL\n";
	}
};
#endif