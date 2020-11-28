//Group 2:
//Write three functions:1. Function ReadData takes two inputs parameters. The first input parameter is the integer array
//and the second input parameter is the size of the array. ReadData is a function that prompts
//the user to enter 20 integers and stores them in an array.
//1. Function PrintPrime calls the function CheckPrime. The function PrintPrime passes every
//element in the array to the function CheckPrime. The function CheckPrime tests the value if it’s
//prime or not. If the value is prime, the function CheckPrime returns true to the PrintPrime
//function. The function PrintPrime prints the number as prime if the function CheckPrime
//returns true. Use the below code to write the definition of the functions.







#include <iostream>

using namespace std;

void ReadData (int data[], int size);
void PrintPrime (int data[], int size);
bool CheckPrime(int value);

int main()
{
 int a[50];
 ReadData(a, 20);
 PrintPrime(a, 20);
}

void ReadData (int data[], int size) 
{
    cout << "Enter 20 Numbers: " << endl;
    for(int i = 0; i < size; i ++)
    {
        cin >> data[i];
    }
}

bool CheckPrime(int value)
{
    if (value <= 1)
    {
        return false;
    }
    
    for (int i = 2; i < value; i++)
    {
        if (value % i == 0)
        {
            return false;
        }
        return true;
    }
}

void PrintPrime (int data[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(CheckPrime(data[i]) == true)
        {
            cout << "\n" << data[i] << " is a prime number" << endl;
        }
    }
}


/*Group 3:
Write two functions:
1. Function ReadData takes two inputs parameters. The first input parameter is the string array
and the second input parameter is the size of the array. ReadData is a function that prompts
the user to enter 10 words and stores them in an array.
2. Function FindFrequencyWord takes three inputs parameters. The first input parameter is the
string array and the second input parameter is the size of the array. The Third parameter is a
string word. The Function FindFrequencyWord returns the number of times the word is
repeated in the array. Use the below code to write the definition of the functions.*/

/***********************************************************************************************************/

#include <iostream>
using namespace std;

void ReadData (string data[], int size);

int FindFrequencyWord (string data[], int size, string SearchedWord);

int main()
 
{
    
    string a[50];

    ReadData(a,4);
    
    //printArray(a,10);
    
    string SearchedWord;
    
    cout<<"please enter the word that you are looking for "<<endl;
    
    cin>> SearchedWord;
    
    cout<<"the word "<< SearchedWord <<" repeated " << FindFrequencyWord (a,10, SearchedWord)<< " times";
    
}


void ReadData (string data[], int size)

{
    cout << "Please enter 10 words: "<< endl;
    
    for (int i=0; i < size; i++)
    {
        cin >> data[i];          // taking user input and storing them in different indexes of the array, starting from index 0 to 9
    }
    
    
}


int FindFrequencyWord (string data[], int size, string SearchedWord)

{
    int count = 0;
    
    for(int i=0; i < size; i++)
    {
        if (data[i] == SearchedWord)     // checking if the SearchedWord matches the words stored in the array
        
        count++;
        
    }
    
    return count;
    
}

/*
Group 4:
Write two functions:
1. Function ReadData takes two inputs parameters. The first input parameter is the integer array
and the second input parameter is the size of the array. ReadData is a function that prompts
the user to enter 20 integers and stores them in an array.
3. Function PrintMaxMin takes two inputs parameters. The first input parameter is the integer
array and the second input parameter is the size of the array. The function PrintMaxMin prints
the largest element in the array and the lowest element in the array. Use the below code to
write the definition of the functions.
*/

#include <iostream>
using namespace std;


void ReadData (int data[], int size);
void PrintMaxMin (int data[], int size);


int main()
{
 
 int a[50]; 
 ReadData(a,20);
 PrintMaxMin (a,20);
 

}//end of main



void ReadData(int data [],int size){
    
cout<<"Enter 20 numbers"<<endl; 
   for (int i=0;i<size;i++)
    cin>>data [i];
    
}//end of void readdata

void PrintMaxMin(int data [] , int size){
    int m, mn;
    m= data[0];
    mn= data[0];
    
  for (int i=1; i<size; i++){
      if (data[i]>m)
        m=data[i];
  }
  
  for (int i=1; i<size; i++){
      if (data[i]<mn)
        mn=data[i];
  }
  
  cout<<"The min number is "<<mn<<endl;
  cout<<"The max number is "<<m<<endl;
  
}//end of void maxmin

/*
Group 6:
Write two functions://
2. Function ReadData takes two inputs parameters. The first input parameter is the integer array
and the second input parameter is the size of the array. ReadData is a function that prompts
the user to enter 20 integers and stores them in an array.//
3. Function FindPairs takes two inputs parameters. The first input parameter is the integer array
and the second input parameter is the size of the array. The function FindPairs determines and
outputs which numbers in the array are sum of two other array elements. If an array element is
the sum of two other array elements, then for this array element, the function should output all
such pairs. Use the below code to write the definition of the functions.
*/
#include <iostream>
using namespace std;

void FindPairs(int data[], int size);

int main()
{
    int a[5] = { 1, -2, 3, -4, 5 };  //size of array is 50

    FindPairs(a, 5);  //s = 20
}//end of main

//NOTE: s is the size of the array.
void FindPairs(int a[], int s)     //Function to find the pairs of two numbers in an array where there sum equals a number in the array.
{
    int sumPair = 0;    //Adds the pairs of i and i2.
    int i = 0;          //The array element that changes for every iteration of i2.
    int i2 = 0;         //The array element that changes when i = s. Comparison variable.
    int i3 = 0;         //The array element that checks if sumPair equals a number in the array.

    while (i < s && i2 < s)     //while the changing array element is less than the array size and the compared array element is less than the array size.
    {
        i3 = 0;                 //i3 is given the default value 0 when the while statement is over.

        if (i == i2)            //if i is equal to the comparison element,
        {
            i = i + 1;          //they are not compared, so i increments by one.

            if (i >= s)         //if i is greater than the size, as this could happen from the previous i increment.
            {
                i = s - 1;      //prevents an overflow by asking for an array element that could not fit into the array.
                break;          //the while statement stops, as i is greater than s before the decrement.
            }//end of if
        }//end of if

        sumPair = a[i2] + a[i]; //Adds the changing array element and the compared element.
        //cout << "i2: " << i2 << " i: " << i << " SumPair: " << sumPair << endl;   //Used for making sense of the program.

        while (i3 < s)              //While array element i3 is less than the array size. Used to check each number in the array to find all pairs with an equal sum to an array element.
        {
            if (sumPair == a[i3])   //If the sum of i and i2 equals an array element of a[],
            {
                cout << "PAIR NUMBER: " << a[i2] << ", " << a[i] << endl;   //Outputs the pair number at the array's index.
                cout << "PAIR INDEX: " << i2 << ", " << i << endl;          //Outputs the index number for the pair.
            }//end of if

            i3 = i3 + 1;            //i3 increments by one to check all array values.
        }//end of while

        if (i == s - 1)         //if i reaches the maximum size of the array,
        {
            i = 0;              //i is reset to 0, as i must be compared to every possible value of i2.

            if (i2 == s - 1)    //if i2 reaches the maximum size of the array,
            {
                break;          //the program is done computing.
            }

            else                //if i2 can still be used to compare an element to other elements,
            {
                i2++;           //i2 increases by one.
            }//end of if
        }

        else                    //if i has not reached the maximum size of the array,
        {
            i = i + 1;          //the program continues with the next increment of i.
        }//end of if
    }//end of while

    //cout << "SumPair: " << sumPair << endl;   //Just to signify the end of function for bug testing.
}//end of FindPairs() function

/*
Group 1:
Write two functions:
1. Function ReadData takes two inputs parameters. The first input parameter is the integer array
and the second input parameter is the size of the array. ReadData is a function that prompts
the user to enter 20 integers and stores them in an array.
2. Function FindSumEevenNumbers takes two inputs parameters. The first input parameter is the
integer array and the second input parameter is the size of the array. Function
FindSumEevenNumbers returns the sum of even array elements to the main function. Use the
below code to write the definition of the functions.
*/

#include <iostream>
using namespace std;


void ReadData (int data[], int size);
int FindSumEevenNumbers (int data[], int size);
int main()
{
int a[50];
ReadData(a, 5);
cout << "the sum is " << FindSumEevenNumbers (a,5); 
}


void ReadData (int data[], int size){//definintion of function

cout << "Please enter 5 numbers" << endl;
    for(int i = 0; i < size; i ++)
    {
        cin >> data[i];
    }
}
    
int FindSumEevenNumbers (int data[], int size){ //defining the function
int sum = 0;
for(int i = 1; i < size; i++){  //loop
        // Check for even or not.
    if(data[i] % 2 == 0){
        sum += data[i];}
    }

    return sum;
}    
 
 *Group 5
Write two functions:
1. Function ReadData takes two inputs parameters. The first input parameter is the integer array
and the second input parameter is the size of the array. ReadData is a function that prompts
the user to enter 20 integers and stores them in an array.
2. Function FindMaxSum takes two inputs parameters. The first input parameter is the integer
array and the second input parameter is the size of the array. The function FindMaxSum returns 
the maximum sum between any two elements in the array. Use the below code to write the
definition of the functions. */

#include <iostream>
using namespace std;

 
void ReadData (int [], int );

int FindMaxSum (int [], int );

 

int main()
{
    
    int a[5];
    ReadData(a,5);
    cout<<"the maximum sum between any two values is "<<FindMaxSum(a,5);

} // end of main

 

void ReadData(int d[], int s)
{ // start of ReadData
       for (int i=0;i<s;i++){ //start of for
       cout<<"Enter values: ";
       cin>>d[i];
        cout<<i<<"  "<<d[i]<<endl;  } // end of for 
} // end of ReadData

int FindMaxSum(int arr[],int num)
{ //start of FindMaxSum
    int maxsum=0;
    int max2=arr[0];
    int max=arr[0];
    for (int j=1;j<num;j++)
    if(arr[j]>max)
    max=arr[j];
    
    for (int k=1;k<num;k++)
    if(arr[k]>max2 && arr[k]!=max)
    max2=arr[k];
    
    maxsum=max+max2;

    return maxsum;
    
}// end of FindMaxSum

// end of program






















