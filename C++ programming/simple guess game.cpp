#include <iostream> 
#include <ctime> 
#include <cstdlib> 
using namespace std; 
int main() 
{
srand(time(0)); 
int randomNum=1+rand()%10; 
int count_limit=0, count=3; 
while (count_limit<count) 
{
int output; 
cout<<"enter a number between 1-10: "; 
cin>>output; 
count_limit++; 
if (output==randomNum) 
{
cout<<"You won!\n"; 
cout<<"The secret number is "<<randomNum; 
return 0; 
}
else if (output>randomNum ) 
cout<<"The number you guess is too high\n";

else if (output<randomNum) 
cout<<"The number you guess is too low\n"; 
}
while (count_limit>=count) 
{
cout<<"You lose. The secret number is: "<<randomNum; 
break; 
}
return 0; 
}
