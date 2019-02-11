#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int x, i = 5;
  
  cout << "Enter a positive integer: " << endl;
  cin >> x;
   
  while (x < 0){
    i--;
    if (i == 0){
      cout << "Too many invalid entries, goodbye!" << endl;
      exit (0);
    }
    else { cout << "Invalid entry, try again" << endl;
    }
    cin >> x;
  }
  for (int j= 1; j <= x; j++){
    if(x % j == 0) cout << j << " ";
  }
  cout << endl;
  return 0;
}
