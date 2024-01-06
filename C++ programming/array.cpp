#include<iostream>
#include <cstring>
using namespace std;

int main ()
{
   int num , product = 1 , divided4=0 , divided5=0 , divided7=0 , last_digit , total, c =0;
   cout << "Enter a number" << endl;
   cin >> num;

   int numLength = to_string(num).length();
   int arrayLength = numLength ;
   int array[arrayLength];

   while(num != 0){
      last_digit = num % 10;
      product = product * last_digit;
      array[arrayLength - 1]= last_digit;
      arrayLength = arrayLength-1 ;
      num = num/10;
   }
   
   for (int i =0 ; i<numLength-1 ; i++){
      cout << array[i] << " * " ;
   }
   cout << array[numLength-1] << " = " << product << endl;


   if (product%4 == 0){
      divided4 = 4;
   }

   if (product%5 ==0){
      divided5 = 5;
   }

   if (product%7 ==0){
      divided7 = 7;
   }

   total = divided4 + divided5 + divided7;

   if (total == 4){
      cout << product << " is a multiple of 4" << endl;
   }else if (total == 5){
      cout << product << " is a multiple of 5" << endl;
   }else if (total == 7){
      cout << product << " is a multiple of 7" << endl;
   }else if (total == 9){
      cout << product << " is a multiple of 4 and 5" << endl;
   }else if (total == 11){
      cout << product << " is a multiple of 4 and 7" << endl;
   }else if (total == 12){
      cout << product << " is a multiple of 5 and 7" << endl;
   }else if (total == 16){
      cout << product << " is a multiple of 4 , 5 and 7" << endl;
   }else{
      cout << product << " is not a multiple of 4 , 5 and 7" << endl;
   }
   
   return 0;


}
