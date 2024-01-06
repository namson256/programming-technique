// Muhammad Naim Bin Abdullah   A23CS0134
#include <iostream>
#include <cmath>
using namespace std;
double CD (double a,double b,double c,double d);
int main (){
	
	double x[3] = {1,2,5};
	double y[3] = {3,6,4};
	char alpha[3] = {'A','B','C'};
	string A = "A(1,3)" , B = ", B(2,6)" , C = "C(5,4)" ;
	cout << A << B << " and " << C << endl;
	
	cout << "\tx\ty" << endl;
	
	for (int i=0 ; i<3 ; i++ )
	{
		cout << alpha [i] << "\t" << x[i] << "\t" << y[i] << endl;
	}
	CD (x[1],x[0],y[1],y[0]);
	CD (x[2],x[0],y[2],y[0]);
	CD (x[2],x[1],y[2],y[1]);
	return 0;
}

double CD (double a, double b,double c,double d) // calculate distance
{
	double f ;
	f = sqrt(pow((a-b),2) + pow((c-d),2));
	static int i = 0;
	switch (i)
	{
		case 0 :cout << "AB = " << f << endl;
				i++;
				break;
				
		case 1 :cout << "AC = " << f << endl;
				i++;
				break;
				
		case 2 :cout << "BC = " << f << endl;
				i++;
				break;
				
		default :cout << "XY = " << f << endl;
				 i++;
				 break;
	}			 
				
}
