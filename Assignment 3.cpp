/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

int main()
{
    int value;
    int num;
    int x;
    int root;
    
    cout << "Value is: "; //Enter Value
    
    cin >> value;
    
    cout << "Num: "; //Enter Num
    
    cin >> num;
    
    switch(num) { //swtich runes multiple statements and calculations
        case 1: //tests whether value is positive, negative, or zero
        if (value >= 0) 
          cout << "The input" << value << "is positive";
        else if (value<=0)
          cout << "The input"<< value << "is negative";
        else if (value = 0)
          cout << "The input" << value << "is zero";
        break;
        
        case 2://tests whether value is
          if(value%5 == 0)
             cout << "The input" << value << "is divisible by 25";
          else
            cout << "The input" << value << "is not divisible by 25";
        break;
        
        case 3:
          x = value*value;
          cout << x;
        break;
        
        case 4:
          root = sqrt(value);
          cout << root;
        break;
        
        default:
         cout << "Not valid";
    
          
           
          
          
         
    }
}
