#include <iostream>
using namespace std;

int main()
{
	
	int num [10];
	
	cout << "<<< prime number >>>\n" << endl;
	for (int i = 0 ; i < 10 ; i++)
	{
		cout << "please enter number: ";
		cin >> num[i];
	}
	
	cout << "\n";
	
	for (int i = 0 ; i < 10 ; i++)
	{
		if (num[i] % 2 == 0 )
		{
			cout << num [i] << " is not a prime number." << endl;
		}
		else 
		{
			cout << num [i] << " is a prime number." << endl;
		}
	}
	return 0;
}

