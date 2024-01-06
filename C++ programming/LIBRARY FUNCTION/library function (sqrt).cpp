#include <iostream>
#include <cmath>
using namespace std;
int main () {
	
	int nom1 , nom2 ,result;
	cout << "Enter 2 numbers: ";
	cin >> nom1 >> nom2;
	if ((nom1<0) || (nom2 <0))
	{
		cout << "negative number\s";
	}
	else 
	{
		result = sqrt(nom1 + nom2);
		cout << "the square root of " << nom1+nom2 << " is" << result;
    }
	return 0;
}
