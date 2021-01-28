//Name: Robert Alexander
//Student ID: 2374235
//Chapman Email: roalexander@chapman.edu
//Course #: CPSC 298 01
//Assignment #2

#include <iostream>
#include <string>

using namespace std;

//Sets a fucntion to perform calculations outputing the cost with sales tax included.
float addTax (float taxRate, float cost){
  float totTax;
  float totCost;
  totTax = cost * taxRate;
  totCost = cost + totTax;

  return totCost;
}

//Main function calls the addTax function and prints the outcome of the calculations.
int main (){
  float totCost;

//Makes totCost equal to the outcome of the called funtion.
  totCost = addTax (0.10, 15.00);
  cout << totCost << endl;
  return 0;
}
