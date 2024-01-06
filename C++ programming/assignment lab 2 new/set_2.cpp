// MUHAMMAD NAIM BIN ABDULLAH A23CS0134
// MUHAMMAD MUKHRITZ AL IMAN BIN MOHD RAFFI A23CS0250
#include <iostream>
using namespace std;
void total_bill (int a);

int main ()
{
	int num;
	
	cout << "welcome to the Food Ordeting System "<< endl;
	cout << "1. Pizza - $10 "<< endl;
	cout << "2. Burger - $5"<< endl;
	cout << "3. Sandwich - $7 "<< endl;
	
	cout << "Enter the number of the item you want to order: ";
	cin >> num;
	total_bill (num);
	
	return 0;
}

void total_bill(int a)
{
	string bill;

	switch (a)
	{
		case 1	:bill = "$10";
			 	 break;
			 	 
		case 2	:bill = "$5";
			 	 break;
			 	 
		case 3	:bill = "$7";
			 	 break;
			 	 
		default	:bill = "$0";
			 	 break;	 	 
	}
	cout << "Your total bill is: " << bill;
}

