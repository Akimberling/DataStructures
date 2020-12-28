/*

	Amber Kimberling
	CMPS 385
	10/26/18
	Project 8

*/
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
#include"HASHPTR.h"

struct MONTH{
	string name;
	int days;
};

int main()
{
	MONTH month[12] = { {"JAN",31},{"FEB",28},{"MAR",31},{"APR",30},{"MAY",31},{"JUN",30},{"JUL",31},{"AUG",31},
	{"SEP",30},{"OCT",31},{"NOV",30},{"DEC",31} };

	HASH h;
	h.clearHashTable();

	for (int i = 0; i < 9; ++i)
	{

		h.pushH(month[i].name, month[i].days);
	}

	h.displayH();
	char con;
	do {
		string item;
		cout << "Enter the value of item you want to search : ";
		cin >> item;

		h.search(item);

		cout << "Would you like to search again? y or n: ";
		cin >> con;
	} while (con != 'n');

	system("pause");
}//end main


/*

	Amber Kimberling
	CMPS 385
	10/26/18
	Project 8

	H[0]->SEP->MAR->NULL
	H[1]->AUG->JUN->FEB->JAN->NULL
	H[2]->NULL
	H[3]->JUL->MAY->APR->NULL
	Enter the value of item you want to search : JUN
	JUN is found and it has 30 days.
	Would you like to search again? y or n: y
	Enter the value of item you want to search : MAY
	MAY is found and it has 31 days.
	Would you like to search again? y or n: y
	Enter the value of item you want to search : FEB
	FEB is found and it has 28 days.
	Would you like to search again? y or n:

*/