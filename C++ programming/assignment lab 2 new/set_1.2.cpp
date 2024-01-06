// MUHAMMAD NAIM BIN ABDULLAH A23CS0134
// MUHAMMAD MUKHRITZ AL IMAN BIN MOHD RAFFI A23CS0250
#include <iostream>
using namespace std;

void displayAccountInfo (double &,double a=0,double b=0) ;
void deposite (double );
void withdraw (double );

int main ()
{
	double sum = 200;
	double a = 500;
	double b = 200;
	char c;

	displayAccountInfo (sum);
	deposite (a);
	withdraw (b);
	displayAccountInfo (sum,a,b);
	
	cout << "Do you want to perform another transaction? (Y/N): ";
	cin >> c;
	cout << "\n";
	
	while ( (c == 'y') || (c =='Y') )
    {
		displayAccountInfo (sum);
		deposite (a);
		withdraw (b);
		displayAccountInfo (sum,a,b);
	
		cout << "Do you want to perform another transaction? (Y/N): ";
		cin >> c;
		cout << "\n";
	}
	
	
	
	return 0;
}

void displayAccountInfo (double &sum,double deposite,double withdraw)
{
	cout << "<<<<< My Accounts Overview >>>>>" << endl;
	cout << "Account Holder Name: User 1"<<endl;
	cout << "Account Number: 1013202341" <<endl;
	if (sum < withdraw)
	{
		cout << "Insufficient funds for withdrawal" ;
	}
	else {
	sum = sum + deposite - withdraw ;
	cout << "Balance: RM "<< sum << endl;
	cout << "\n";
	}
}

void deposite (double a)
{
	cout << "<<<<< Deposit Transaction >>>>>"<<endl;
	cout << "deposit of RM " << a << " successful "<< endl;
	cout << "\n";
}

void withdraw (double b)
{
	cout << "<<<<< Withdrawal Transaction >>>>>" <<endl;
	cout << "withdrawal of RM " << b << " successful" << endl ;
	cout << "\n";
}
