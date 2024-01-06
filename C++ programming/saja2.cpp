#include <iostream>
using namespace std;

void set (int [][3]);
void operation (int [][3], int[][3], int[][3]);
void display (int [][3]);

int main ()
{
	
	int group1 [3] [3] ;
	int group2 [3] [3] ;
	int group3 [3] [3] ;
	set(group1);
	display(group1);
	set(group2);
	display(group2);
	cout << "Multiplication of group1 and group2:"<<endl;
	operation(group1 , group2 , group3);
	display (group3 );
	
	return 0;
}

void set (int a[][3])
{
	static int i = 1;
	cout << "group" << i <<"\n\n";
	for (int x = 0 ; x < 3 ; x++)
	{
		for (int y = 0 ; y < 3 ; y++)
		{
			cout << "enter number " << x << ","<< y << " : ";
			cin >> a[x][y]; 
		}
	}
	cout << '\n';
	i++;
}

void operation(int a[][3] , int b[][3] , int c[][3])
{
	for (int x = 0 ; x < 3 ; x++)
	{
		for (int y = 0 ; y < 3 ; y++)
		{
			 c[x][y] = a[x][y] * b[x][y];
		}
	}
}

void display (int a[][3])
{
	for (int x = 0 ; x < 3 ; x++)
	{
		for (int y = 0 ; y < 3 ; y++)
		{
			cout << a[x][y] << " ";
		}
	cout << "\n";	
	}
	cout << '\n';
}
