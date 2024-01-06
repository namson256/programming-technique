#include <iostream>
using namespace std;
int main ()
{
	int num [10];

	for (int i = 0 ; i < 10 ; i++)
	{
		cout << "please enter number : ";
		cin >> num [i];
	}
	
	int largest = num[0];
	int lowest = num[0];
	cout << "\n";
	
	for (int i = 1 ; i < 10 ; i++)
	{
		if(largest < num[i])
		largest = num[i];
		
		if(lowest > num[i])
		lowest = num[i];
	}
	
	cout << "largest number : " << largest << endl;
	cout << "lowest number : " << lowest << endl;
	
	return 0;
}
