#include <iostream>
#include <cmath>
using namespace std;

void inputNumbers (int [] , int &);
int sum (int [], int );
double avrg (double , int );
void f (double , double );

int main ()
{
	int num [50];
	int counter ;
	double x , y;
	
	inputNumbers (num, counter);
	x = sum (num,counter);
	double avrgx = avrg (x ,counter);
	
	inputNumbers(num,counter);
	y = sum (num, counter);
	double avrgy = avrg (y ,counter);

	f(avrgx,avrgy);
	
	return 0;
}

void inputNumbers (int a[] , int &c)
{
	int static loop = 1;
	cout << "\nList " << loop << endl;
	loop++;
	
	cout << "How many numbers do you want to enter? => ";
	cin >> c;
	
	for (int i = 0 ; i < c ; i++)
	{
		int static j = 0;
		cout << "Enter number " << (i+1) << "=> ";
		cin >> a[j];
		j++;
	}
	
}

int sum (int a[] , int counter)
{
	int sum = 0;
	int static b = 0;
	b = b + counter;
	int static c = 0;
	
	for ( c ; c < b ; c++ )
	{
		sum += a[c];
	}
	c += counter ;
	return sum;
}

double avrg (double a , int counter )
{
	double arvg = a / counter ;
	return arvg;
}

void f (double a , double b)
{
	double f = sqrt((a + b));
	cout << "\nThe value of function f = " << f;
}


