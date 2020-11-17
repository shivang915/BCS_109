/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i, n, sum = 0;


    for(i = 1; i <= 1000; i++) {

        if((i % 2) == 0) {

            sum += i;

        }
    }

    cout << "Sum: " << sum << endl;


    
}

