/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Group 1//
// Write a program that test numbers from 1 to 10 if they are even or not.
//for each value, you have to call the function.The function should return true if the number is even. Otherwise, it should return false.if the function returns true, please print message in the program NOT in the function that says" thisnumber is even” otherwise. “this number is odd //


#include <iostream>
using namespace std;


bool evenfunction (int i); //this line is to prevent an error from happening later on in the code.
//test


int main()

{
int i; //defining variable
bool isEven;
for (i = 1; i<=10; i++){
cout<< "enter a number from 1-10"<<endl; //Prompts user to input number within range
cin>>i;
isEven = evenfunction(i); //calls function to determine if the number is divisble by 2 (even)
if (isEven)
cout<<"The number you chose is even -> "<<i;
else
cout<<"The number you chose is odd -> "<<i;
}
return 0;
}

bool evenfunction (int i){
bool a;

if (i % 2 == 0)
a=true;
else
a=false;
return a;
}

//Group 2//
//Group 2

 

/*
Write a program that finds the maximum and the minimum number respectively among
five numbers entered by user. You have to create two functions. One is to find the minimum and the
second to find the maximum. You have to call the functions in the main program.
You have to enter the values in the main program and you pass the five values to the two functions.
*/

 

#include <iostream>

 

using namespace std;

 

void findMin(int x, int y, int z, int w, int r)
{
    int lowest;
    if ((x < y) && (x < z) && (x < w) && (x < r))
    {
        lowest = x;
    }
    else if ((y < x) && (y < z) && (y < w) && (y < r))
    {
        lowest = y;
    }
    else if ((z < x) && (z < y) && (z < w) && (z < r))
    {
        lowest = z;
    }
    else if ((w < x) && (w < y) && (w < z) && (w < r))
    {
        lowest = w;
    }
    else if ((r < x) && (r < y) && (r < z) && (r < w))
    {
        lowest = r;
    }
    cout << "Smallest Number: " << lowest << "\n";
}

 

void findMax(int x, int y, int z, int w, int r)
{
    int largest;
    if ((x > y) && (x > z) && (x > w) && (x > r))
    {
        largest = x;
    }
    else if ((y > x) && (y > z) && (y > w) && (y > r))
    {
        largest = y;
    }
    else if ((z > x) && (z > y) && (z > w) && (z > r))
    {
        largest = z;
    }
    else if ((w > x) && (w > y) && (w > z) && (w > r))
    {
        largest = w;
    }
    else if ((r > x) && (r > y) && (r > z) && (r > w))
    {
        largest = r;
    }
    cout << "Largest Number: " << largest;
}

 

int main()
{
    int x, y, z, w, r;
    cout << "Input 5 numbers: \n";
    cin >> x >> y >> z >> w >> r;
    cout << "\n";

 

    findMin(x, y, z, w, r);
    findMax(x, y, z, w, r);

 

    return 0;
}



/* Group 4
Write a program which will ask the user to enter his/her marks (out of 100). Enter 3 different values in
the main program. Define a function that will display grades according to the marks entered as below:
Marks Grade
91-100 AA
81-90 AB
71-80 BB
61-70 BC
51-60 CD
41-50 DD
<=40 Fail
*/

 

 

 


#include <iostream>
using namespace std;

 

 

 

void  grade (int grade) {
      if (grade>=91 && grade<=100)
    cout<<"Your grade is: AA"<<endl;
    
    else if (grade>=81 && grade<=90)
    cout<<"Your grade is: AB"<<endl;
    
    else if (grade>=71 && grade<=80)
    cout<<"Your grade is: BB"<<endl;
    
    else if (grade>=61 && grade<=70)
    cout<<"Your grade is: BC"<<endl;
    
    else if (grade>=51 && grade<=60)
    cout<<"Your grade is: CD"<<endl;
    
    else if (grade>=41 && grade<=50)
    cout<<"Your grade is: DD"<<endl;
    
    else if (grade>=0 && grade<=40)
    cout<<"You FAILED"<<endl;
    
    else 
    cout<< "Grade is not valid" << endl;
}
    
 int main() {
    
    int x, y;

 

 
    while (y<=2) 
    {
        
    cout<<"Enter your grade (out of 100): ";
    cin>>x;

 

 

 

    grade (x);
    y++;
    
    
    }//end of while

 


}
//Group 4//

/* Group 5:
Define a function to find out if number is prime or not.
You have to enter the prime number in the main program and for each value, call the function to test if
it's prime or not. Enter 5 values in the main program. */

#include <iostream>

using namespace std;


void ifPrime(int x)
{
bool isPrime=true;
int count=2;
if (x==2)
cout<<x<< " is a prime number."<<endl;
else {
for(count;count<=(x);count++)
{
if(x%count==0)
isPrime=false;
break;
}
if(isPrime==true)
cout<<x<< " is a prime number."<<endl;
else
cout<<x<< " is not a prime number."<<endl;
} //else
} // end


int main()
{
int i=1;
while (i<=5){
int x;
cout<<"Enter a number: "<<endl;
cin>>x;

ifPrime(x);
i++;
} //end of while

}

/*Group 3
A person is eligible to vote if his/her age is greater than or equal to 18.
Define a function to find out if he/she is eligible to vote.
The user has 3 values for age and he wants to check the age for each value. You have to enter the age
value in the main program and for each value, call the function to find out if he/she is eligible to vote.
*/

 


#include <iostream>
using namespace std;

 

void check(int a)
{
if (a>=18)
cout<< "You are eligible to vote since you are "<< a << endl;
else
cout<< "You are not eligible to vote since you are "<< a << endl;

 

}

 

int main()
{
int x, i=1;
while (i<=3)
{
cout<< "Enter the age: "<< endl;
cin>> x;
check(x);
i++;
} //End of while block
}

/Group 6: Question- Write a function to find the average of 3 grades for students.
//You have to prompt the grades in the main program and pass these grades into the function.
//The function should return the average of three grades.


#include <iostream>
using namespace std;


double average(double x, double y, double z) //function that calculates the average of the three grades.
{
double result = (x + y + z) / 3; //x = grade1, y = grade2, z = grade3, divided by 3 for average.
return result;
}//average



double debugWrongInput(double grade) //function that debugs inputs that are too large.
{
if (grade < 0 || grade > 105) //If the grade is a negative number or greater than 105 points, then the grade does not exist. Its 105, not 100, for bonus points.
{
cout << "\nWrong input. Grade is now zero.\n\n";
grade = 0; //The grade is given its default point value of 0.
}
}//debugWrongInput



/////////////////////////////////////////////////
int main()
{
double grade1, grade2, grade3; //Variable declaration for the grades.

//Instructions:
cout << "Hello! This program is used to calculate the average of three grades (0-105 points) for a student.\n\n";

cout << "Grade one: ";
cin >> grade1;

//Debug:
grade1 = debugWrongInput(grade1);
/////////////


cout << "Grade two: ";
cin >> grade2;

grade2 = debugWrongInput(grade2);


cout << "Grade three: ";
cin >> grade3;

grade3 = debugWrongInput(grade3);


cout << "Average of grades: " << average(grade1,grade2,grade3); //Function that calculates the average.

}//main