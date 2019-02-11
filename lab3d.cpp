#include <iostream>
using namespace std;

int main(){
  double base, height, area;

  cout << "Enter triangle base: ";
  cin >> base;
  cout << "Enter triangle height: ";
  cin >> height;

  area = (base / 2) * height;

  cout << "The area of the triangle is " << area << "," 
  << endl <<  "based on its height of " << height << 
  " and its base of " << base << "." << endl;
  return 0;
}
