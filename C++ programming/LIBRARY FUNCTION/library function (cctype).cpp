#include <iostream>
#include <cctype>
using namespace std; 
int main () {
	
	char input;
	cout << "Enter any character: ";
	cin.get(input);
	if(isalpha(input))
	{
		cout.put(input);
		cout << " it is an alphabet";
	}
	if(isdigit (input))
	{
		cout << "it is a digit";
	}
	if(islower (input))
	{
		cout << "the letter is lowercase ";
	}
	if(isupper(input))
	{
		cout << "the letter is uppercase ";
	}
	return 0 ;
}
