#include <iostream>
#include <cstring>
using namespace std;

void head (int = 10 , int =3); 
void space(int a= 10)  ;
void neck (int = 10 , int =3);
void hand (int = 10 , int =3);
void body (int = 10 , int =3);
void leg (int = 10 , int =3);
void line (int = 10 , int =3);
int main (){
	

	head(20,10);
    neck(10,3);
	hand (80,4);
	body (40,13);
	line (40,2);
	body (40,4);
	leg (36,13);

	return 0;
}

void head (int cols, int rows)    
{
	for (int down = 0 ; down < rows; down++)
	{
		space (40);
		for (int across = 0 ; across < cols ; across++)
		cout << "*";
		cout << endl;
	}
}
void space(int a)
{
   for (int i=0 ; i <= a ; i++)
	{
		cout << " ";  
	}
}

void neck (int cols, int rows)    
{
	for (int down = 0 ; down < rows; down++)
	{
		space (45);
		for (int across = 0 ; across < cols ; across++)
		cout << "*";
		cout << endl;
	}
}

void hand (int cols, int rows)    
{
	for (int down = 0 ; down < rows; down++)
	{
		space (10);
		for (int across = 0 ; across < cols ; across++)
		cout << "*";
		cout << endl;
	}
}

void body (int cols, int rows)    
{
	for (int down = 0 ; down < rows; down++)
	{
		space (30);
		for (int across = 0 ; across < cols ; across++)
		cout << "*";
		cout << endl;
	}
}

void leg (int cols ,int rows)
{
	for (int down = 0 ; down <= rows ; down++ )
	{
		space(30);
		for (int across = 0 ; across < cols ; across++)
		{
			cout << "*";
			if (across == 17)
			{
				cout << "    ";
			}
		}
			cout << endl;
	}
	
}

void line (int cols, int rows)    
{
	for (int down = 0 ; down < rows; down++)
	{
		space (30);
		for (int across = 0 ; across < cols ; across++)
		cout << "$";
		cout << endl;
	}
}
