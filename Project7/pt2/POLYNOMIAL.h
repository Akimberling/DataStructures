/*
	Amber Kimberling
	10/22/18
	CMPS 385
*/
#ifndef POLYNOMIAL
#define POLYNOMIAL

class POLY
{
private:
	struct node
	{
		int coef;
		int power;
		node *next;
	};
	node *front, *rear;
public:
	POLY(){ front = rear = NULL; }
	void insert(int a, int p)
	{
		node *z;
		z = new(node);
		z->coef = a;
		z->power = p;
		z->next = NULL;
		if (front == NULL)
			front = rear = z;
		else
		{
			rear->next = z;
			rear = z;
		}
	}
	bool empty_q() { return(front == NULL) ? true : false; }
	int value(int a)
	{
		node *z = front;
		int value = 0;
		while (z != NULL)
		{
			value += z->coef * pow(a, z->power);
			z = z->next;
		}
		return value;
	}
	void display()
	{
		node *z = front;
		while (z != NULL)
		{
			if (z->coef > 0)
				cout << " + " << z->coef;
			else
				cout << " " << z->coef;
			cout << "x^" << z->power;
			z = z->next;
		}
	}

};
#endif
