#include <iostream> 
using namespace std;

int fun(int &x, int y) { //int function that takes two integers, first integer being passed by reference
  if (x == y) cout << y; //if x and y are the same, prints y value
  if (x > y) y++;  // if x is greater than y, y + 1
  else x++; return x;  //otherwise x + 1 and returns the value of x
}

int main() { 
  int a[6] = {5, 3, 1, 4, 4, 1}; //int array consisting of 6 index values
  int b = 5, c = 2; //two integers initialized
  cout << a[b] + a[c] << endl; // prints out: 4 + 2, which would be 6, starts a new line at the end.
  cout << fun(b, c) << endl; //prints out 5
  for (int r = 3; r <= 5; 
  r++) cout << fun(r, c); //prints: 3, function loops: prints on the same line: 4, loops again, prints: 5 
  cout << endl; //new line
  fun(a[5], a[4]); //prints 4
  cout << a[4] << endl; //prints 4 
  cout << fun(a[1], a[3]); //prints 5
  cout << a[3] << endl; //prints 1 and starts a new line 
  }
