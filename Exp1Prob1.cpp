#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main ()

{
	cout <<"Input tickets sold in box, sideline, premium, genad"<<endl;

	string TicketPrice;
	string NumberOfTicketsSold;

	cout << " " << "Ticket Price" << "                         " << "Number of Tickets Sold";
	cout << " " << endl;

	int Box;
	cout << " Box: $250 " << "                                " ;
	cin >> Box;
	cout << "                                   " << " Total Box Sales Amount:      " << Box * 250 << endl;

	int SideLine;
	cout << " SideLine: $100 " << "                          " ;
	cin >> SideLine;
	cout << "                                  " << " Total Sideline Sales Amount: " << SideLine * 100 << endl;

	int Premium;
	cout << " Premium: $50 " << "                             " ;
	cin >> Premium;
	cout << "                                   " << " Total Premium Sales Amount:   " << Premium * 50 << endl;

	int GenAd;
	cout << " GenAd: $25 " << "				      " ;
	cin >> GenAd;
	cout << "                                   " << " Total GenAd Sales Amount:" << GenAd * 25 << endl;

	double TotalSale;
	cout << "                                   " << " Total Sales Amount:" << " " << (Box * 250) + (SideLine * 100) + (Premium * 50) + (GenAd * 25) << endl;

    getch();
	return 0;
}
  