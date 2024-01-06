#include <iostream>
#include <string>
using namespace std;

#define WASH 10.0 // the price of WASH service charge
#define VACUUM 7.0 // the price of VACUUM service charge
#define POLISH 15.0 // the price of POLISH service charge

void setType(string &);
void setPackage (int &);
float wash (string);
float vacuum (string);
float polish (string);


int main ()
{
	string carType;
	int wsPkg;
	float totalCharge = 0;
	
	setType (carType);
	setPackage (wsPkg);
	
	switch (wsPkg) 
	{
		case 1 : totalCharge = wash(carType);
				 break;
		case 2 : totalCharge = vacuum(carType);
				 break;
		case 3 : totalCharge = polish (carType);
				 break;
	}
	cout << endl;
	cout << "Total service charge is " << totalCharge;
	return 0;
}

void setType (string &type)
{
	do{
	cout << "Enter car type (sedan/mpv): ";
	cin >> type ;
	} while (type != "sedan" && type != "mpv" );
	cout << "\n";
}    

void setPackage (int &pkg)
{
	cout << "1. Basic" << endl;
	cout << "2. Deluxe" << endl;
	cout << "3. Premium" << endl;
	
	do{
	cout << "choose wash service package (1/2/3): " ;
	cin >> pkg;
	} while (pkg != 1 && pkg !=2 && pkg != 3);
	
	cout << endl;
}

float wash (string type)
{
	float price;
	if (type == "mpv")
	price = WASH * 1.2;
	else 
	price = WASH;
	
	cout << "Wash service charge is " << price;
	cout << "\n";
	return price;
}

float vacuum (string type)
{
	float price;
	if (type == "mpv")
	price = VACUUM * 1.05;
	else 
	price = VACUUM;
	
	cout << "Vacuum service charge is " << price;
//	cout << "\n";
//	return price;
}

float polish(string type)
{
	float price;
	if (type == "mpv")
	price = POLISH * 1.2;
	else 
	price = POLISH;
	
	cout << "Polish service charge is " << price;
	cout << "\n";
	return price;
}


