#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double mass, density;
	cout << "input the mass of the object:" <<endl;
	cin >> mass;
	cout << "mass of the object is " << mass << "g" <<endl;
	cout << "input the density of the object: " << endl;
	cin>> density;
	cout << "density of the object is " << density << "g/cm^3" << endl;
	cout << "volume of the object is " << mass/(4*density) << "cm^3" << endl;
	
	getch();
	return 0;
}
