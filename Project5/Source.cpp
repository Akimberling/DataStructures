/*
	Amber Kimberling
	10/03/18
	CMPS 385
	Project 5(pointer implementation of stack)
*/
#include<iostream>
#include<cstring>
#include<string>
#include "STACKPAC.h"
using namespace std;

int main() {

	STACK<int, 20> POST;
	POST.clearStack();

	char con;
	string token;
	int d, s;
	int x, y, r;

	do {

		cout << "Enter a postfix expression: ";
		
		while (cin>>token, token != "$")
		{
			
			if (isalpha(token[0]))
			{
				cout << "Enter a value for " << token << ": ";
				cin >> s;
				POST.pushStack(s);
				cout << s;
			}
			else if (isdigit(token[0]))
			{
				d = stoi(token);
				POST.pushStack(d);
			}
			else if (token == "*")
			{
				x = POST.popStack();
				y = POST.popStack();
				r = y * x;
				POST.pushStack(r);
			}
			else if (token == "/")
			{
				x = POST.popStack();
				y = POST.popStack();
				r = y / x;
				POST.pushStack(r);
			}
			else if (token == "+")
			{
				x = POST.popStack();
				y = POST.popStack();
				r = y + x;
				POST.pushStack(r);
			}
			else if (token == "-")
			{
				x = POST.popStack();
				y = POST.popStack();
				r = y - x;
				POST.pushStack(r);

			}
			cin >> token;
		}
		

		cout << "Value of the Expression: " << POST.popStack() << endl;
		cout << "Continue? y or n: ";
		cin >> con;
		cout << endl;

	} while (con != 'n');

	system("pause");
	
}


/*
	Amber Kimberling
	10/03/18
	CMPS 385
	Project 5(pointer implementation of stack)

	Enter a postfix expression: tom jerry + 234 + $
	Enter a value for tom: 
	Enter a value for jerry: 
	Value of the Expression: 234
	Continue? y or n: y

	Enter a postfix expression: 12 xyz 13 bill 14 + + + $
	Enter a value for xyz:
	Enter a value for bill:
	Value of the Expression: 39
	Continue? y or n: y
*/