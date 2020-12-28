/*
	Amber Kimberling
	11/28/18
	Project No. 10
*/
#include<iostream>
using namespace std;
#include "FRACT.h"

int main()
{

	fract f1, f2, f;

	f1.readFract();
	f2.readFract();
	
	cout << endl;

	//addition
	f = f1 + f2;
	
	f1.displayFract(); 
	cout << " + ";
	f2.displayFract();
	cout << " = ";
	f.displayFract();

	cout << endl;

	//subtraction
	f = f1 - f2;

	f1.displayFract();
	cout << " - ";
	f2.displayFract();
	cout << " = ";
	f.displayFract();

	cout << endl;

	//multiplication
	f = f1 * f2;

	f1.displayFract();
	cout << " * ";
	f2.displayFract();
	cout << " = ";
	f.displayFract();

	cout << endl;

	//division
	f = f1 / f2;

	f1.displayFract();
	cout << " / ";
	f2.displayFract();
	cout << " = ";
	f.displayFract();

	cout << endl;



	//increasing by 1
	f2.displayFract();
	cout << "++ = ";
	f = ++f2;
	f.displayFract();
	
	cout << endl;

	//decreasing by 1
	f1.displayFract();
	cout << "-- = ";
	f = --f1;
	f.displayFract();

	cout << endl;

	system("pause");
}

/*
	Amber Kimberling
	11/28/18
	Project No. 10 

	-------------------
	
	Enter a fraction: 4/5
	Enter a fraction: 6/7

	(4/5) + (6/7) = (58/35)
	(4/5) - (6/7) = (-2/35)
	(4/5) * (6/7) = (24/35)
	(4/5) / (6/7) = (28/30)
	(6/7)++ = (7/8)
	(4/5)-- = (3/4)
	Press any key to continue . . .

*/