//Name: Robert Alexander
//Student ID: 2374235
//Chapman Email: roalexander@chapman.edu
//Course #: CPSC 298 01
//Assignment #2

#include <iostream>
#include <string>

using namespace std;

//Program converts given feet and inches into meters and centimeters.

//Input function takes an input and convertes it all into inches.
float input (){
  float feet;
  float inches;
  float totInput;

  cout << "Enter feet:" << endl;
  cin >> feet;
  cout << "Enter inches" << endl;
  cin >> inches;

  totInput = (feet * 12) + inches;
  return totInput;
}

//The conversionM function converts inches from the input funciton into meters.
float conversionM (float totInput){
  float meters;
  meters = totInput * 0.0254;   //0.0254 is the conversion from inches to meters.

  return meters;
}

//The conversionCm function converts the meters in conversionM into centimeters.
float conversionCm (float meters){
  float centimeters;
  centimeters = meters * 100;

  return centimeters;
}

//Simply outputs the given meters and centimeters from both conversion* functions.
float output (float meters, float centimeters){
  cout << "That is " << meters << " meters and " << centimeters << " centimeters." << endl;
}

//Includes a while loop that allows the person to type Exit when done.
int main (){
  string programGo = "Start";
  float totInput;
  float meters;
  float centimeters;

  while (programGo != "Exit"){
    totInput = input();
    meters = conversionM(totInput);
    centimeters = conversionCm(meters);
    output(meters, centimeters);

//Put this at the end so that once they type Exit the program ends;
    cout << "Type Exit to stop program." << endl;
    cin >> programGo;
  }
  return 0;
}
