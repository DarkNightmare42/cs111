
#include <iostream>
using namespace std;

int main(){

  int year;

  cout << "Enter the year you'd like to check: " << endl;
  cin >> year;
  
  if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0){
    cout << year  << " is a leap year" << endl;
  }
  //else if (year % 4 == 0){
   // cout << year  << " is a leap year" << endl;
     // }
  else{ 
    cout << year << " is not a leap year" << endl;
  }
  return 0;
}
  
