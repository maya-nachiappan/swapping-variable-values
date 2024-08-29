//
//  main.cpp
//  assignment 1
//
//  Created by maya nachiappan on 8/28/24.
//

#include <iostream>
using namespace std;

int main()
{
    int num1=2;
    int num2=1;
    cout << "Hello\n" << "Num 1 is: "<< num1 << " and Num 2 is: " << num2 << endl;
    int temp; // initializing a temp variable to swap the numbers
    temp = num1;
    num1 = num2;
    num2 = temp ;
    cout <<" The new values are now Num 1: " << num1<< " and Num 2: " <<num2 << endl;
    
}
