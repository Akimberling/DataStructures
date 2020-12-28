/*
	Amber Kimberling
	CMPS 385
	10/17/18
	Project No. 6
*/

#include<iostream>
#include "QUEUEPTR.h"
using namespace std;

int main()
{
	queue_ptr<int> S;
	int b[5] = { 10, 50, 70, 20, 40 };
	int max = 0, min = b[0];

	for (int z = 0; z < 5; z++)
	{
		S.push_q(b[z]);
	}
	cout << "Content of the nodes: ";
	while (!S.empty_q())
	{
		int r = S.pop_q();
		cout << r << " --> ";
		if (r > max)
		{
			max = r;
		}
		if (r < min)
		{
			min = r;
		}
	}
	cout << "NULL" << endl;
	cout << "The maximum is: " << max << endl;
	cout << "The minimum is: " << min << endl;

	system("pause");
}

/*
	Amber Kimberling
	CMPS 385
	10/17/18
	Project No. 6

	Content of the nodes: 10 --> 50 --> 70 --> 20 --> 40 --> NULL
	The maximum is: 70
	The minimum is: 10
	Press any key to continue . . .

*/