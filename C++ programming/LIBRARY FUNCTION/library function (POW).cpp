#include <iostream>
#include <cmath>
using namespace std;
int main () {
	
	double area, radius;
	
	cout << "this program calculates the area of a circle. \n";
	cout << "what is the radius of the circle? ";
	cin >> radius;
	area = 3.14159 * pow(radius,2.0);
	cout << "the area is " << area << endl;
	
	return 0;
}
