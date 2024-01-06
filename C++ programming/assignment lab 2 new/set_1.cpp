// MUHAMMAD NAIM BIN ABDULLAH A23CS0134
#include <iostream>
using namespace std;

void displayAccountInfo (double &,double,double) ;
void deposite (double &);
void withdraw (double &);

int main ()
{
	double sum = 200;
	double a = 0;
	double b = 0;
	char c;

	displayAccountInfo (sum,a,b);
	deposite (a);
	withdraw (b);
	displayAccountInfo (sum,a,b);
	
	cout << "Do you want to perform another transaction? (Y/N): ";
	cin >> c;
	cout << "\n";
	
	while ( (c == 'y') || (c =='Y') )
    {
    	double a = 0;
		double b = 0;
		
		displayAccountInfo (sum,a,b);
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
	sum = sum + deposite - withdraw ;
	cout << "Balance: RM "<< sum << endl;
	cout << "\n";
}

void deposite (double &a)
{
	cout << "<<<<< Deposit Transaction >>>>>"<<endl;
	cout << "deposit of RM "  ;
	cin >> a ;
	cout<< "successful "<< endl;
	cout << "\n";
}

void withdraw (double &b)
{
	cout << "<<<<< Withdrawal Transaction >>>>>" <<endl;
	cout << "withdrawal of RM "  ;
	cin >> b ;
	cout<< "successful "<< endl;
	cout << "\n";
}
