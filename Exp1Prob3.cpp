#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	double netBalance, payment, d1, d2, averageDailyBalance, interest;

	cout << "Enter the net balance: " << endl;
	cin >> netBalance;

	cout << "Enter the payment made: " << endl;
	cin >> payment;

	cout << "Enter the number of days in the billing cycle: " << endl;
	cin >> d1;

	cout << "Enter the number of days payment is made before billing cycle: " << endl;
	cin >> d2;

	cout << "Enter interest per month : " << endl;
	cin >> interest;

	averageDailyBalance = (netBalance * d1 - payment * d2) / d1 ;
	interest = (averageDailyBalance * 0.0152);

	cout << "The interest is " << interest << endl;
	
	getch ();
	return 0;
}