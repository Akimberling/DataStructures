#ifndef HASHPTR
#define HASHPTR

class HASH {
private:
	struct node {
		string month;
		int days;
		node *next;
	};
	node *H[4];
public:
	void clearHashTable() {
		for (int z = 0; z < 4; z++)
		{
			H[z] = NULL;
		}
	}
	int hashFn(int x) {
		return x % 4;
	}
	void pushH(string x, int d) {
		int z = hashFn(x[0] + x[1] + x[2]);
		node *p = new(node);
		p->month = x;
		p->days = d;
		p->next = H[z];
		H[z] = p;
	}
	void search(string x)
	{

		int z = hashFn(x[0]+x[1]+x[2]);
		
		node *p = H[z];
		while (p != NULL)
		{
			if (p->month == x) { break; }
			p = p->next;
		}

		if (p == NULL)
		{
			cout << x << " Does not exist\n";
		}
		else
		{
			cout << x << " is found and it has " << p->days << " days.\n";
			
		}
	}

	void displayH()
	{
		node *p;
		for (int z = 0; z < 4; ++z)
		{
			p = H[z];
			cout << "H[" << z << "]->";
			while (p != NULL)
			{
				cout << p->month << "->";
				p = p->next;
			}
			cout << "NULL\n";

		}
	}

};

#endif