//
//  Tiffany Ngai
//  20900617
//  121 assignment1 q1
//
//  I hereby declare that this code, submitted for credit for the course SYDE121, is a product of my own efforts. This coded solution has not been plagiarized from other sources and has not been knowingly plagiarized by others.
//
//  Project: Balance scale
//  Due Date: 25/9/2020

/*
The result of step 1 is 23

Tried to use non-integer real number, the program will round down the number and give a correct answer e.g. 17.2 gives a result of 3, which is correct as 17 = 15 + 1 + 1

Tried to use negative number, integer greater than 2147487647, the input would become the maximum (i.e. 2147487647)

Tried to use integer smaller than 2048 to test the program e.g. 203 gives a result of 5, which is correct as 203 = 125 + 75 + 1 + 1 + 1

The program works for all natural numbers that are smaller than 2147487647
*/

#include <iostream>
using namespace std;

//function that calculate how many weights are needed to the target output starting from the largest weight
//Input: weight_given = the weight the user would like to measure
//Output: number of weight needed
void balance_scale() {
    
    //declare the input variable
    int weight_given;
    
    //user input weight value + echoing
    cout << "Weight types of the balance: 125 lb, 75 lb, 42 lb, 15 lb, and 1 lb\n";
    cout << "Input the weight (in pounds) you want to put on the balance ";
    cin >> weight_given;
    cout << "The weight you want to put on the balance is "
         << weight_given
         << ".\n";
    
    //compare and divide the remainder with weight 125 lb
    int weights125 = weight_given / 125;
    int remainder = weight_given % 125;
    
    //compare and divide the remainder with weight 75 lb
    int weights75;
    if (remainder >= 75) {
        
        weights75 = remainder / 75;
        remainder = remainder % 75;
        
    }
        else {
            weights75 = 0;
            
        }
    
    //compare and divide the remainder with weight 42 lb
    int weights42;
    if (remainder >= 42) {
        
        weights42 = remainder / 42;
        remainder = remainder % 42;
        
    }
       else {
        weights42 = 0;
           
       }
    
    //compare and divide the remainder with weight 15 lb
    int weights15;
    if (remainder >= 15) {
        
        weights15 = remainder / 15;
        remainder = remainder % 15;
        
    }
       else {
        weights15 = 0;
           
       }
    
    //compare and divide the remainder with weight 1 lb
    int weights1;
    weights1 = remainder;
    
    //output the result
    if (weight_given >= 0) {
        cout << "The number of weight require is "
             << weights125 + weights75 + weights42 + weights15 + weights1
             << ".\n";
        
    }
        else {
            cout << "Invalid number.\n";
        };
    
}



int main() {
         
    balance_scale();
         
    return 0;
}
