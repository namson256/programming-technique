//muhammad naim bin abdullah 
//A23CS0134
//dr nies <3
#include <iostream>
using namespace std;

void readQty (int &, int &, int &);
void displayHighProd (double,double,double);
double calcAvrg (int , double );
void summaryCom (double,double,double,double );

int main ()
{
	double TotalLowestCom = 9999 ;
	double TotalHighestCom = 0; 
	double highestComA = 0;
	double highestComB = 0;
	double highestComC = 0;
	double totalComAllAgent = 0;
	int numAgent = 0;
	string name1 ,name2 ,name3 ,name4 ,name5 ,name6,agentName ;
    double comA , comB , comC , totalCom;
    
	do 
	{
		cin.ignore();
		cout << "----------------------AGENT------------------------" << endl;
		cout << "Agent Name: ";
		getline(cin,agentName);
		
		if (agentName == "" || agentName == " ") 
		{
         	break;
       	}
		else
		{
			numAgent++;
			
			int quantityA , quantityB , quantityC;
			readQty(quantityA, quantityB, quantityC);
			
			comA = quantityA * ((150*0.025));
			comB = quantityB * ((300*0.05));
			comC = quantityC * ((450*0.1));
			totalCom = comA + comB + comC;
			
			summaryCom(comA,comB,comC,totalCom);
			cout << "\n\n";
			
			totalComAllAgent = totalComAllAgent + totalCom;
			
			if (TotalLowestCom > totalCom )
			{
				TotalLowestCom = totalCom ;
				name1 = agentName ;
			}
			
			if (TotalHighestCom < totalCom)
			{
				TotalHighestCom = totalCom;
				name2 = agentName;
			}
			
			if (highestComA < comA)
			{
				highestComA = comA;
				name3 = agentName;
			}
			
			if (highestComB < comB)
			{
				highestComB = comB;
				name4 = agentName;
			}
			
			if (highestComC < comC)
			{
				highestComC = comC;
				name5 = agentName;
			}

		}

	} while (agentName != "");
	
	double averageCom = calcAvrg (numAgent ,totalComAllAgent );
	
	cout << "------------------SALES ANALYSIS-------------------\n";
	cout << "Lowest commission for three products: RM " << TotalLowestCom << " (" << name1 <<")\n";
	cout << "Highest commission for three products: RM " << TotalHighestCom << " (" << name2 <<")\n";
	cout << "Highest commission for Product A: RM " << highestComA << " (" << name3 <<")\n";
	cout << "Highest commission for Product B: RM " << highestComB << " (" << name4 <<")\n";
	cout << "Highest commission for Product C: RM " << highestComC << " (" << name5 <<")\n";
	cout << "Total of commission for 4 agents: RM " << totalComAllAgent << endl;
	cout << "Average commission for 4 agents: RM " << averageCom;
	
	return 0 ;
}

void readQty (int &a , int &b , int &c)
{
	do {
		cout << "product A: ";
		cin >> a;
	} while (a < 0 || a > 100 );
	
	do {
		cout << "product B: ";
		cin >> b;
	} while (b < 0 || b > 100 );
	
	do {
		cout << "product C: ";
		cin >> c;
	} while (c < 0 || c > 100 );
}

void displayHighProd (double comA, double comB , double comC)
{	
	if (comA > comB && comA > comC)
	{
		cout << "Highest commission - Product A: RM" << comA;
	}
	else if (comB > comA && comB > comC)  
	{
		cout << "Highest commission - Product B: RM" << comB;
	}
	else
	{
		cout << "Highest commission - Product C: RM" << comC;
	}
} 

double calcAvrg (int numAgent, double totalComAllAgent)
{
	double averageCom = totalComAllAgent / numAgent;
	return averageCom ;
}

void summaryCom (double comA , double comB , double comC , double totalCom)
{
	cout << "-------------------SALES SUMMARY-------------------" << endl;
	cout << "Total of commission for three products: RM" << totalCom << endl;
	displayHighProd ( comA, comB , comC);
}

