#include <iostream>
using namespace std;
int days(int,int,int);

int main (){
	
	int years,months,weeks;
	cout << "Enter year : ";
	cin >> years;
	
	cout << "Enter months : ";
	cin >> months;
	
	cout << "Enter weeks : ";
	cin >> weeks;
	
	int total = days(years,months,weeks);
	cout << "days : " <<total;
	return 0;
}

int days(int a,int b,int c)
{
	 a = a * 365;
	 b = b * 30
	 c = c * 7;
	return a + b + c;
}
