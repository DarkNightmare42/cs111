#include <iostream>
using namespace std;

int main(){

  int quarter, dime, nickel, penny, change, difference;
  
  //user input
  
  cout << "How many coins do you need?" << endl;
  cin >> change;
  
  //checking change using division and rechecking change

  quarter = change / 25;
  change = change - (quarter * 25);
  dime = change / 10;
  change = change - (dime * 10);
  nickel = change / 5;
  change = change - (nickel * 5);
  penny = change / 1;
  
  //check whether plural or singular

  string quarters, dimes, nickels, pennies;

  if (quarter > 1)
  quarters = " quarters"; 
  else if (quarter == 0)
  quarters = " quarters";
  else
  quarters = " quarter";

  if (dime > 1)
  dimes = " dimes";
  else if (dime == 0)
  dimes = " dimes";
  else
  dimes = " dime";

  if (nickel > 1)
  nickels = " nickels";
  else if (nickel == 0)
  nickels = " nickels";
  else
  nickels = " nickel";

  if (penny > 1)
  pennies = " pennies";
  else if (penny == 0)
  pennies = " pennies";
  else
  pennies = " penny";
  
  //print out result
  
  cout << quarter << quarters << endl;
  cout << dime << dimes << endl;
  cout << nickel << nickels << endl;
  cout << penny << pennies << endl;
  
  return 0;
}
