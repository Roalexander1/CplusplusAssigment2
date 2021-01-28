//Name: Robert Alexander
//Student ID: 2374235
//Chapman Email: roalexander@chapman.edu
//Course #: CPSC 298 01
//Assignment #2

#include <iostream>
#include <string>

using namespace std;

//Sets up a function that sets two variable to 0.
void zeroBoth (int num1, int num2){
  num1 = 0;
  num2 = 0;

//Demonstrates that the variables changed, by outputing their values and where they are from.
  cout << "After function: " << num1 << ", "<< num2 << endl;
}

//Main function gives values to the variables and calls function
int main (){
  int num1 = 3;
  int num2 = 9;
  zeroBoth (num1, num2);

//Demonstrates that the variables changed, by outputing their values and where they are from.
  cout << "Before function: " << num1 << ", "<< num2 << endl;

  return 0;
}
