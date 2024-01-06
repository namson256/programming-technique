#include <iostream>
#include <conio.h>
using namespace std;

void dispStatus (int);
void getInput (int &,int &, int &, int &);
void dispOutput (int);
double calcAverage (int , int );

int main ()
{
	string nameState,enter;
	bool loop;
	int totalCase , newCase , totalDead , totalRecovered , activeCase , numState;
	int highestnumActiveCase , totalActiveCase;
	string name1;
	
	do 
	{
		cout << "\n<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>\n";
		cout << "State name      : ";
		getline(cin,nameState);
		
		numState++;
		getInput (totalCase,newCase,totalDead,totalRecovered);
		activeCase = totalCase + newCase - totalDead - totalRecovered;
		totalActiveCase += activeCase;
		
		dispOutput (activeCase);
		
		if (highestnumActiveCase < activeCase )
		{
			highestnumActiveCase = activeCase;
			name1 = nameState ;
		}
		
		cin.ignore();
		cout << "\n\nPress <ENTER> to continue...";
		getline(cin,enter);
		
		if(enter == "\0")
			loop = true;
		else
			loop = false;
		
	} while (loop );
	
	double average = calcAverage (numState,totalActiveCase);
	
	cout << "\n<<<<<<<<< ACTIVE CASES >>>>>>>>>>\n";
	cout << "total  : " << totalActiveCase << endl;
	cout << "Highest: " << highestnumActiveCase << " (" << name1 << ")" << endl;
	cout << "Average for 5 states: " << average;
	
	return 0;
}

void dispStatus (int activeCase)
{
	if ( activeCase > 40)
	{
		cout << "Status       : Red zone";
	}
	else if ( activeCase >= 21 && activeCase <= 40 )
	{
		cout << "Status       : Orange zone";
	}
	else if ( activeCase >= 1 && activeCase <= 20)
	{
		cout << "Status       : Yellow zone";
	}
	else if ( activeCase <= 0)
	{
		cout << "Status       : Green zone";
	}
	
}

void getInput (int &totalCase,int &newCase, int &totalDead, int &totalRecovered)
{
	cout << "total cases     : ";
	cin >> totalCase;
	
	cout << "New cases       : ";
	cin >> newCase;
	
	cout << "Total death     : ";
	cin >> totalDead;
	
	cout << "Total recovered : ";
	cin >> totalRecovered;
}

void dispOutput (int activeCase)
{
	cout << "\n<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>" << endl;
	cout << "Active cases : " << activeCase << endl;
	dispStatus (activeCase);
}

double calcAverage (int numState, int totalActiveCase)
{
	double average = totalActiveCase / numState;
	return average;
}

