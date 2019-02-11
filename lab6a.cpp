#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

  int x;
  int attempts=3;
  
  cout << "Enter a positive integer: " << endl;
  cin  >> x;

  while (x < 0){
    //cout << "Enter a positive integer: " << endl;
    attempts--;
    if (attempts == 0) exit (0);
    else cout << "Invalid entry" << endl;
    cin >> x;
  }

  int p = x;
  int reversed = 0;

  while (x > 0){
    reversed = reversed * 10 + x % 10;
    x /= 10;
  }
  cout << reversed << endl;

  for (int j = 1; j < p; j++){
      if (j % 2 == 1 && j % 7 != 0){
        cout << j << " ";
      }
  }
  cout << endl;
  return 0;
}  
