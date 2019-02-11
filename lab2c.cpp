#include <iostream>
#include <string>
using namespace std;

int main(){
  string lot_number, street_name, county_name,
  state_name, zip_code;

  cout << "Please enter house number: \n";
  cin >> lot_number;
  cout << "Please enter Street: \n";
  cin >> street_name;
  cout << "Please enter County: \n";
  cin >> county_name;
  cout << "Please enter State: \n";
  cin >> state_name;
  cout << "Please enter Zip Code: \n";
  cin >> zip_code;
  cout << lot_number << " " << street_name << endl 
  << county_name << ", " << state_name << " " << zip_code
  << endl;
  return 0;
}
