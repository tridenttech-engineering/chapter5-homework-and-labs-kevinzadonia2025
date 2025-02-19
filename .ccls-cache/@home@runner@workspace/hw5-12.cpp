//hw5-12.cpp - displays the total owed
//Created/revised by Kevin Zadonia on 2/18/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//declared variables
	double item1;
	double item2;
	double total;

	//enter input items
	cout << "Enter the price of item 1: ";
	cin >> item1;
	cout << "Enter the price of item 2: ";
	cin >> item2;
	cout << endl;

	//if else statement for total
	if (item1 < item2)
	{
		total = item2 + (item1 / 2);
	}
	else
	{
		total = item1 + (item2 / 2);
	}

	//display output
	cout << fixed << setprecision(2);
	cout << "Total amount owed: $" << total << endl;

	
	return 0;

	
}	//end of main function