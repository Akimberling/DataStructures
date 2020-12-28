/*
	Amber Kimberling
	11/03/18
	BSTREEPTR
*/

#ifndef BSTREEPTR
#define BSTREEPTR

class BTREE {
	
private: 
	struct node {
		string month;
		node *left, *right;
	};
		 node*root;

public: 
	BTREE() { root = NULL; }

	void insert(node*& r, string x)
	{
		node *p = new(node);
		p->month = x;
		p->left = NULL;
		p->right = NULL;
		if (r == NULL)
			r = p;
		else
		{
			if (x < r->month)insert(r->left, x);
			if (x > r->month)insert(r->right, x);
		}
	}
	void displayInOrder(node * &r)
	{
		//LC P RC
		if (r != NULL)
		{
			displayInOrder(r->left);
			cout << r->month << " ";
			displayInOrder(r->right);
		}
	}
	void displayPreOrder(node * &r)
	{
		//P LC RC
		if (r != NULL)
		{
			cout << r->month << " ";
			displayPreOrder(r->left);
			displayPreOrder(r->right);
		}
	}
	void displayPostOrder(node * &r)
	{
		//LC RC P
		if (r != NULL)
		{
			displayPostOrder(r->left);
			displayPostOrder(r->right);
			cout << r->month << " ";
		}
	}

	void search(node * &r, string x)
	{
		if (r == NULL) { cout << x << " Does Not Exist"; return; }
		else if (x == r->month) { cout << x << " is found."; return; }
		else { if (x < r->month) search(r->left, x);
		if (x > r->month) search(r->right, x);
		}
	}
	int countNodes(node * &r)
	{
		if (r == NULL) return 0;
		else return 1 + countNodes(r->right) + countNodes(r->left);
	}
	int treeHeight(node *& r)
	{
		if (r == NULL) return -1;
		else return 1 + max(treeHeight(r->right), treeHeight(r->left));
	}
	void insert(string x) { insert(root, x); }
	void displayInOrder() { displayInOrder(root); }
	void displayPreOrder() { displayPreOrder(root); }
	void displayPostOrder() { displayPostOrder(root); }
	void search(string x) { search(root, x); }
	int countNodes() { return countNodes(root); }
	int treeHeight() { return treeHeight(root); }
	
};


#endif 
