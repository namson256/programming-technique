#include <iostream> 
#include <cstring> 
using namespace std; 
int main() 
{
for(int i=1; i<=8; i++) 
{
string output(i, '+'); 
cout << output << "\n"; 
}
for (int i=8; i>=1; i--) 
{
string output(i, '+'); 
cout << output << "\n";
}
return 0;
}
