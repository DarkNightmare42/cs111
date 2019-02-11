#include <iostream>
using namespace std;

int main(){
  int x, y;

  cout << "Please enter the first number: " << endl;
  cin >> x;
  cout << "Please enter the second number: " << endl;
  cin >> y;

  cout << "Output" << endl;
  cout << (double)x / (double)y * 100 << "%" << endl;
  cout << x % y << endl; 
  return 0;
} 
