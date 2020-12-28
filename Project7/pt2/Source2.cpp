#include<iostream>
using namespace std;
#include "POLYNOMIAL.h"

int main()
{
	POLY P;

	int c, pwr,a;
	cout << "Enter a coefficient and power, (0,0) to exit :";
	cin >> c >> pwr;
	while ((c != 0) || (pwr != 0))
	{
		P.insert(c,pwr);
		cout << "Enter a coefficient and power, (0,0) to exit :";
		cin >> c >> pwr;
	}
	P.display();
	cout << endl;
	cout << "Enter the a value: ";
	cin >> a;
	cout << "f(" << a << ") = " << P.value(a) << endl;;
	system("pause");
}
/*

Enter a coefficient and power, (0,0) to exit :3 4
Enter a coefficient and power, (0,0) to exit :-7 3
Enter a coefficient and power, (0,0) to exit :4 2
Enter a coefficient and power, (0,0) to exit :-3 0
Enter a coefficient and power, (0,0) to exit :0 0
 + 3x^4 -7x^3 + 4x^2 -3x^0
Enter the a value: -4
f(-4) = 1277
Press any key to continue . . .

*/