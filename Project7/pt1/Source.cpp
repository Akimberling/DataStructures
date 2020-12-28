/*
	Amber Kimberling
	10/22/18
	CMPS 385
	Project 7 No. 1
*/
#include<iostream>
#include"QUEUEPTR.h"
#include"STACKPTR.h"
using namespace std;

int main()
{
	queue_ptr<char> Q;
	stack_ptr<char> S;
	char con;
	do {
		char c, c1, c2;
		cout << "Enter a sentence:  ";
		while (cin.get(c), c != '\n')
		{
			if (isalpha(c))
			{
				c = toupper(c);
				Q.push_q(c);
				S.push_s(c);
			}
		}
		while (!Q.empty_q())
		{
			c1 = Q.pop_q();
			c2 = S.pop_s();
			if (c1 != c2)
				break;
		}

		if (Q.empty_q())
			cout << "It is a palindrome\n";
		else
			cout << "It is not a palindrome\n";

		cout << "Continue? y(yes) or n(no)?  ";
		cin >> con;
		cout << endl;
		
		cin.ignore(1, '\n');

	} while (con != 'n');
	system("pause");
}
/*
	Amber Kimberling
	10/22/18
	CMPS 385
	Project 7 No. 1

	Enter a sentence:  Never Odd or Even
	It is a palindrome
	Continue? y(yes) or n(no)?  y

	Enter a sentence:  Murder for a jar of red rum
	It is a palindrome
	Continue? y(yes) or n(no)?  y

	Enter a sentence:  hello
	It is not a palindrome
	Continue? y(yes) or n(no)?  n

	Press any key to continue . . .
*/