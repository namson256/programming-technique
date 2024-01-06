#include <iostream>
using namespace std;

void getInput(int & , int &, int &);
void dispTier (int);
double calcAverage (int , int );
void dispsSummary (int );

int main ()
{
	string name, name1 , name2;
	int score1,score2,score3,numStudent;
	int totalMark, lowestMark = 9999 , totalAllMark = 0 , highestMark;
	bool loop;
	
	do
	{
		cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>\n";
		cout << "Name : ";
		getline(cin,name);
		
		if (name == "\0")
		{
			loop = false;
			break;
		}
		else 
		{
			loop = true;
		}
		
		numStudent++;

		getInput(score1 , score2, score3);
		
		totalMark = ((score1/100)*35)+((score2/100)*35)+((score3/100)*35);
		totalAllMark += totalMark;
		
		dispsSummary (totalMark);
		
		if (lowestMark > totalMark)
		{
			lowestMark = totalMark;
			name1 = name;
		}
		if (highestMark < totalMark)
		{
			highestMark = totalMark;
			name2 = name;
		}
		
	} while (loop == true);
	
	double average = calcAverage (numStudent,totalAllMark);
	
	cout << "<<<<<<< RESULTS ANALYSIS >>>>>>>>\n";
	cout << "Lowest mark : " << lowestMark << " (" << name1 << ")\n";
	cout << "highest mark : " << highestMark << " (" << name2 << ")\n";
	cout << "Average for " << numStudent << " students: " << average;
	
	return 0;
}

void getInput(int &score1 , int &score2, int &score3)
{
	do 
	{
		cout << "Q1 mark: " ;
		cin >> score1;
	} while (score1 < 0 || score1 > 100);
	
	do 
	{
		cout << "Q2 mark: " ;
		cin >> score2;
	} while (score2 < 0 || score2 > 100);
	
	do 
	{
		cout << "Q3 mark: " ;
		cin >> score3;
	} while (score3 < 0 || score3 > 100);
}

void dispTier (int totalMark)
{
	if (totalMark >= 75)
	{
		cout << "Tier : Tier 1" << endl;
	}
	else if (totalMark >=40 && totalMark < 75)
	{
		cout << "Tier : Tier 2" << endl;
	}
	else 
	{
		cout << "Tier : Tier 3" << endl;
	}
	cout << endl;
}

double calcAverage (int numStudent, int totalAllMark)
{
	double average = totalAllMark / numStudent;
	return average;
}

void dispsSummary (int totalMark)
{
	cout << "\n<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>\n";
	cout << "Total marks: " << totalMark << endl;
	dispTier (totalMark);
}

