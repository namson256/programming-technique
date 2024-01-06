#include <iostream>
using namespace std;
int main (){
	
	int n,m;
	cout << "please enter any number: ";
	cin >> n;
	
	for (int i=1 ; i<=n ; i++)
	    {
	    	for (int j=0 ; j < i ; j++)
	     {
	     	cout << "*";
		 }
		    cout << "\n";
		    m++;
		}
		
	for ( m ; m>=0 ; m--)
	    {
	    	for (int j=m ; j > 0 ; j--)
	     {
	     	cout << "*";
		 }
		    cout << "\n";
		}	
		
	
	return 0;
}
