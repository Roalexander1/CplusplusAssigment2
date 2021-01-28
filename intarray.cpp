//Name: Robert Alexander
//Student ID: 2374235
//Chapman Email: roalexander@chapman.edu
//Course #: CPSC 298 01
//Assignment #2

#include <iostream>
#include <string>

using namespace std;

//Set up an array of 10 nonnegative numbers and print its contents to the console
int main (){
  //Sets up the array to a size of 10 items
  int numberArray[10];

  //Increments the array to set up numbers into the array
  for (int i = 0; i < 10; ++i){
    numberArray[i] = i;
    cout << numberArray[i] << endl;
  }
  return 0;
}
