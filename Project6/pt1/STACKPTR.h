/*
	Amber Kimberling
	10/15/18
	CMPS 385
*/
#ifndef STACKPTR
#define STACKPTR

template<class T>
class stack_ptr
{
private:
	struct node
	{
		T info;
		node *next;
	};
	node *stack;
public:
	stack_ptr() { stack = NULL; }
	void push_s(T x)
	{
		node *p;
		p = new(node);
		p->info = x;
		p->next = NULL;
		if (stack == NULL)
		{
			stack = p;

		}
		else
		{
			p->next = stack;
			stack = p;
		}
	}
	bool empty_s() { return(stack == NULL) ? true : false; }
	T pop_s()
	{
		node *p;
		p = stack;
		T x = stack->info;
		stack = stack->next;
		delete(p);
		return x;

	}
};

#endif

