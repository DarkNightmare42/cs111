#include <iostream>
using namespace std;

int main(){

  int feet, inches_remainder, inches;

  cout << "Enter your height in inches: " << endl;
  cin >> inches;

  feet = inches / 12;
  inches_remainder =  inches % 12;

  if ( inches >= 72){
    cout << feet << "FT\' " << inches_remainder << "IN\'" << endl;
    cout << "You're tall!" << endl;}
  else {
    cout << feet <<"FT\' " << inches_remainder << "IN\"" << endl;
  }
  return 0;
} 
