/*

	Amber Kimberling
	CMPS 385
	10/26/18
	Project 8

*/

#include<iostream>
#include"STACKPTR.h"
using namespace std;

int main() {

	queue_ptr<int> Q;
	srand(0);

	for (int z = 0; z < 10; ++z)
	{
		int x = rand() % 50;
		Q.push_q(x);
	}

	do
	{
		int p = Q.pop_q();
		cout << p << " ";

	} while (!Q.end_q());
	cout << endl;
	system("pause");
}

/*

	Amber Kimberling
	CMPS 385
	10/26/18
	Project 8

	38 19 38 37 5 47 15 35 0
	Press any key to continue . . .
*/