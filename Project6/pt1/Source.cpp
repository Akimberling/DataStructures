/*
	Amber Kimberling
	CMPS 385
	10/17/18
	Project No. 6
*/

#include<iostream>
#include "STACKPTR.h"
using namespace std;

int main()
{
	stack_ptr<int> S;
	int sum = 0, tN = 0;
	int a[7] = { 3, 6, 9, 1, 8, 5, 2 };

	for (int z = 0; z < 7; z++)
	{
		S.push_s(a[z]);
	}
	cout << "Content of the nodes: ";
	while (!S.empty_s())
	{
		int r = S.pop_s();
		cout << r << " --> ";
		sum += r;
		tN++;

	}
	cout << "NULL" << endl;
	cout << "The total of all the nodes: "<< sum << endl;
	cout << "There are "<< tN <<" nodes in the linked list"<< endl;

	system("pause");
}

/*
	Amber Kimberling
	CMPS 385
	10/17/18
	Project No. 6

	Content of the nodes: 2 --> 5 --> 8 --> 1 --> 9 --> 6 --> 3 --> NULL
	The total of all the nodes: 34
	There are 7 nodes in the linked list
	Press any key to continue . . .
*/