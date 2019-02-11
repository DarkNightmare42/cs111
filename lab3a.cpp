#include <iostream>
#include <cmath>
using namespace std;

int main(){

  double pi = 3.14;
  double radius_value;
  string radius = "The area of the circle is ";

  cout << "Enter the radius of the circle: ";
  cin >> radius_value;

  cout << radius << radius_value << endl << " and the area of the circle is "
  << pi * pow(radius_value,2) << "."  << endl;
  return 0;
}
