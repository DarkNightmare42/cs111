#include <iostream>
using namespace std;

int main(){

  int x;
  
  cout << "Enter the number of rows: ";
  cin >> x;
  for (int rows = 1; rows <= x; rows++){
    for (int cols = 1; cols <= x; cols++){
    	if (cols == rows && cols != (x/2) || cols == (x + 1 - rows) && cols != (x/2)){
    		if (cols == (x /2) && rows == (x / 2)) cout << "x";
    		cout << "*";
    }
    else cout << " ";
		}
	cout << endl;
	}
  return 0;
}
