/*
	Amber Kimberling
	CMPS 385
	10/17/18
	Project No. 6
*/

#include<iostream>
using namespace std;
#include "ORDEREDLL.h"

int main()
{
	ORDEREDLLPTR<int> O;
	int c[6] = {100, 500, 800, 300, 200, 900};
	int sum = 0;

	for (int z = 0; z < 6; z++)
	{
		int x = c[z];
		O.insert(x);
		sum += x;
	}
	cout << "content of all nodes: ";
	O.display();
	cout << "The average is: " << sum / 6 << endl;


	system("pause");
}

/*
	Amber Kimberling
	CMPS 385
	10/17/18
	Project No. 6

	content of all nodes: 100-->200-->300-->500-->800-->900-->NULL
	The average is: 466
	Press any key to continue . . .
*/