/*
	Amber Kimberling
	11/03/18
	Project 9
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#include"BSTREEPTR.h"

int main()
{
	BTREE t;
	string months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	char con;
	string item;

	for (int z = 0; z < 12; z++)
	{
		t.insert(months[z]);
	}

	do {

		cout << "Search: ";
		cin >> item;
		t.search(item);
		
		cout << "\nWould you like to continue searching? y or n: ";
		cin >> con;
		cout << endl;

	} while (con != 'n');

	cout << "PreOrder Traversal: ";
	t.displayPreOrder();
	cout << "\nInOrder Traversal: ";
	t.displayInOrder();
	cout << "\nPostOrder Traversal: ";
	t.displayPostOrder();

	cout << "\n\nHeight of the tree: "<< t.treeHeight();

	cout << "\nNumber of nodes: " << t.countNodes();
	cout << endl;

	system("pause");
}
/*
Amber Kimberling
11/03/18
Project 9

Search: Feb
Feb is found.
Would you like to continue searching? y or n: y

Search: Dec
Dec is found.
Would you like to continue searching? y or n: n

PreOrder Traversal: Jan Feb Apr Aug Dec Mar Jun Jul May Sep Oct Nov
InOrder Traversal: Apr Aug Dec Feb Jan Jul Jun Mar May Nov Oct Sep
PostOrder Traversal: Dec Aug Apr Feb Jul Jun Nov Oct Sep May Mar Jan

Height of the tree: 5
Number of nodes: 12
Press any key to continue . . .

*/