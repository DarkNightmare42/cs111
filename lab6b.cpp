#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

  int x;
    
  cout << "Enter a positive integer: " << endl;
  cin >> x;

  if (x < 1) exit(0);

  int first = 0;
  while (x > 0){
    first = x;
    x /= 10;
  }
  cout << first << endl;
  return 0;
}
  
    
