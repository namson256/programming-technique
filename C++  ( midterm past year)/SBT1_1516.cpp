#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int Tax_invoice ;
	string name , IC;
	double medfee , regitfee , ward_ratefee , consult;
	
	cout << "Enter Tax Invoice no => ";
	cin >> Tax_invoice;
	
	cin.ignore();
	cout << "Enter patient name => ";
	getline (cin,name);
	
	cout << "Enter patient IC no => ";
	getline (cin,IC);
	
	cout << "\n\n=== Services and Items Bill ===\n\n" ;
	
	cout << "a. Enter charge : Medication" << setw(20) << "=> RM";
	cin >> medfee;
	
	cout << "b. Enter charge : Registration" << setw(18) << "=> RM";
	cin >> regitfee;
	
	cout << "c. Enter length of stay (day)" << setw(17) << "=> ";
	cin >> ward_ratefee;
	
	cout << "d. Enter charge : Consultancy" << setw(19) << "=> RM";
	cin >> consult;
	
	cout << "\n\n\n Please refer to generated Tax Invoice receipt.";
	
	
	
}
