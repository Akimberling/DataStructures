/*
	Amber Kimberling
	CMPS 385
	10/31/18
*/
#ifndef QUEUEPTR
#define QUEUEPTR


	template<class G>
	class queue_ptr
	{
	private:
		struct node
		{
			G info;
			node *next;
		};
		node *front, *rear;
	public:
		queue_ptr() { front = rear = NULL; }
		void push_q(G x)
		{
			node *p;
			p = new(node);
			p->info = x;
			p->next = front;
			if (front == NULL)
				front = rear = p;
			else
			{
				rear->next = p;
				rear = p;
			}
		}
		bool end_q() { return(front == rear) ? true : false; }
		G pop_q()
		{
			node *p;
			p = front;
			G x = front->info;
			front = front->next;
			delete(p);
			return x;
		}
	};

#endif
