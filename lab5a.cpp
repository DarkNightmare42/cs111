#include <iostream>
using namespace std;

int main(){
  int month, next;

  while (month <= 0 || month > 12){

    cout << "Enter the month of your birthday between 1-12: " << endl;
    cin >> month;

    if (month <= 0 || month > 12){
      cout << "Invalid entry, please try entering";
      cout << endl << "a number between 1-12" << endl << endl;
    }
  }
  
  if (month == 9){
    cout << "Happy birthday! Your birthday is this month!" << endl;
  }
  else if (month < 9){
    cout << "Sorry, your birthday has passed, it will come again in ";
    cout << month + 3 << " months" << endl;
  }
  else {
    next = (3 + month) - 12;
    cout << "Your birthday will be in " << next;
    if ( next > 1) cout << " months" << endl;
    else cout << " month" << endl;
  }
  return 0;
}
