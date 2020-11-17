/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {

   float num;
   float sum = 0.0;
   
   int counter = 0;
   float average;

  while (counter < 10) {
      cout << "Enter a number: ";
      cin >> num; 
      sum = num + sum;
      counter++;
    } 
  
  
  cout << "My total  " << sum<< endl;
  average = sum/10;
  cout << average;
  
  
    
}
    







