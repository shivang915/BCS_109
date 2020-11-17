/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


using namespace std;

int main()
{
int x, i ;
int sum = 0;
bool prime = true;

for (int i1=1; i1<=5;i1++){
cout<<"enter the value "<<endl;
cin>>x;
prime = true;
i=2;
// this while loop to test every value x if it's prime
while(prime) {
if (x==2) break;
if (x%i == 0)
{ prime=false; break;}

i = i + 1;
/*
if x=7
i=2
7%2 !=0
7%3 !=0
7%4 !=0
7 %5!=0
7%6 !=0
*/

if (i==x) break;

}// while loop
if (prime==true) { sum=sum+x;}
}// for
cout << sum;
}







      
    
    
        
          
     
    
    
        
    

        
          
          
  

   
    
        
    

            
          
    
    
    
        
        
    
   
    
    





