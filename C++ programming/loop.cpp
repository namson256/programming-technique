#include <iostream>
#include <cstring>
using namespace std;
int main (){
	
	int n = 10 ;
	
	do
	{
		string loop (n,'=');
		cout << loop << endl;
		n--;
	}
	while (n>=0);
	
	return 0;
}
