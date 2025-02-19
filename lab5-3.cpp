//lab5-3.cpp - displays the total amount due
//Created/revised by Kevin Zadonia on 2/18/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


		//declare variables
		const double MEMBER_DISCOUNT = 0.10;
		const double NON_MEMBER_DISCOUNT = 0.05;
		const double SHIP_CHG1 = 0.99;
		const double SHIP_CHG2 = 4.99;
		double discount = 0.0;
		double amtOwed = 0.0;
		char member = ' ';

		//enter input items
	cout << "Amount owed before any discount and shipping: ";
		cin >> amtOwed;
		cout << "Premier Club member (Y/N)? ";
		cin >> member;

		//calculate discount and shipping
		if (toupper(member) == 'Y')
			discount = amtOwed * MEMBER_DISCOUNT;
		else
			discount = amtOwed * NON_MEMBER_DISCOUNT;
		//end if statement
	amtOwed -= discount;

		//end if statement
		if (amtOwed >= 100.0) {
			amtOwed += SHIP_CHG1;	
		} else {	
			amtOwed += SHIP_CHG2; 
		}


	//display output
		cout << fixed << setprecision(2);
		cout << "Amount owed after any discount and shipping: " 
			<< amtOwed << endl;

		return 0;
	return 0;
}	//end of main function