#include <iostream>
using namespace std;
int main ()
{
	double rainfall [12];
	
	for (int i = 0 ; i < 12 ; i++)
	{
		cout << "enter rainfall for " << (i+1) << " month : ";
		cin >> rainfall[i];
	}
	
	double sum = 0;
	for (int i = 0 ; i < 12 ; i++)
	{
		sum = sum + rainfall[i];
	}
	
	cout << "\n";
	double ave_rainfall = sum / 12;
	
	double highest = rainfall[0];
	double lowest = rainfall[0];
	for (int i = 0 ; i < 12 ; i++)
	{
		if (highest < rainfall[i])
		highest = rainfall[i];
		
		if (lowest > rainfall[i])
		lowest = rainfall[i];
	}
	
	cout << "total rainfall for the year : " << sum << endl;
	cout << "average monthly rainfall : " << ave_rainfall << endl;
	cout << "months with the highest amount : " << highest << endl;
	cout << "months with the lowest amount : " << lowest << endl;
	
	return 0;
}
