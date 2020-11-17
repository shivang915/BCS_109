/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Shivang Parikh
Assigment 1 */

#include <iostream>
#include <string>

using namespace std;

int main()
/* Write a complete C++ program to print 3 separate lines (you can use \n or endl)
The first line is your name
The second line is your major
The third line is your hobbies */
{
    cout << "Shivang Parikh " << endl;/* name */
    cout << "Biomedical Engineering " << endl; /* major */
    cout << "Video games, jogging, walking" << endl;/* hobbies */




/*  Write a complete C++ program to enter your name, your major and your hobbies from the
keyboard and print them in separate lines. Hint: use getline(cin,variableName) from string library to
enter the entire sentences include the whitespace.
Write in the comments what happens if you use cin instead of getline */
/* If you use cin instead of getline, you get the same result */
  string str; 
  
    cout << "Please enter your name: \n"; 
    cout << "Enter major: \n";
    cout << "Enter hobbies: \n";
    getline(cin, str); 
    getline(cin, str);
    getline(cin, str);
    cout << "please enter: \n";
    cin >> str;
    


/* Write C++ program to calculate the following formula and print the value of variable result
to the console screen. Use parentheses if it’s needed. Hint: use cout<<”result =”<<result. */

int x = 100;
int y = 200;
int sum;
sum = (x*y)% 4;
cout << "sum =  " << sum << endl;
sum=400+sum*x;
cout << "product = " << sum << endl;
cout << sum << endl;

/* Write C++ program to print the value of a, b , c after each statement.
Use the following cout<<”a=”<<a<<” b=”<<b<<” c=”<<c<<endl
Suppose a , b, and c are int variables and a=7 and b=2. What value is assigned to each variable after
each statement executes?  */

int a = 7;
int b = 2;
int c;
a = ++b +5;
c = a+b-- +1;
b= (a++) - (--c); 
cout << "a =  " << a << endl;
cout << "b =  " << b << endl;
cout << "c =  " << c << endl;

}





