#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int MAX_BOOKS = 5;
void displayMainMenu ();
void addbook (string [],string [],string [], int &);
void displayLibrary (string [],string [],string [] , int );
void searchByTitle (string [],string [],string []);

int main ()
{

	string title [MAX_BOOKS] ;
	string authors [MAX_BOOKS] ;
	string year [MAX_BOOKS] ;
	
	int num;
	int loop = 0;
	
	do{
	displayMainMenu();
	do{
	cout << "Enter your choice: ";
	cin >> num;
	cout << '\n';
	}while (num < 1 || num > 4);
	
	switch (num)
	{
		case 1 : addbook(title,authors,year,loop);
				 break;
				 
		case 2 : displayLibrary(title,authors,year,loop);
				 break;
				 
		case 3 : searchByTitle(title,authors,year);
				 break;
				
		case 4 : cout << "GoodBye!\n";
				 break;
	}
	
	} while ( num != 4) ;
	
	return 0;
}

void displayMainMenu ()
{
	int num;
	cout << "<<<<<Library Management System>>>>>" << endl;
	cout << "========================================" << endl;
	cout << "1. Add a Book" << endl;
	cout << "2. Display Library" << endl;
	cout << "3. search by Title" << endl;
	cout << "4. Quit" << endl;
}

void addbook (string a[], string b[], string c[] , int &loop)
{
	if (loop != MAX_BOOKS)
	{
		static int i = 0;
		cin.ignore();
		cout << "Enter book title: " ;
		getline(cin,a[i]);
		
		cout << "Enter author name: " ;
		getline(cin,b[i]);
		
		cout << "Enter publication year: " ;
		cin >> c[i];
		cout << '\n' << "Book added successfully!" << "\n\n";
		loop++;
		i++;
	}
	else 
	{
		cout << "the number of addbook has reach the limit\n\n";
	}
}

void displayLibrary (string a[], string b[], string c[], int loop)
{
		cout << "Library Contents:" << endl;
		cout << "====================" << endl;
	for (int i = 0 ; i < loop ; i++)
	{
		cout << "Title: " << a[i] << endl;
		cout << "Author: " << b[i] << endl;
		cout << "Year: " << c[i] << endl;
		cout << "\n";
	}
}

void searchByTitle (string a[], string b[], string c[])
{
	string name;
	cin.ignore();
	cout << "Enter the title to search: ";
	getline (cin,name);
	cout << "\n";
	
	for (int i = 0 ; i < MAX_BOOKS ; i++)
	{
		if (name  == a[i] ) 
		{
			cout << "Book found: " << endl;
			cout << "====================" << endl;
			cout << "Title: " << a[i] << endl;
			cout << "Author: " << b[i] << endl;
			cout << "Year: " << c[i] << endl;
			cout << "\n";
		}
	}
}
