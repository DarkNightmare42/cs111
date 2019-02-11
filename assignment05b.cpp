#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int x, y;
	
	cout << "Odd numbers only." << endl << "Enter height:" << endl;
	cin >> x;
	cout << "Enter width: " << endl;
	cin >> y;
	
	if ( x % 2 == 0 || y % 2 == 0) {
		cout << "Invalid entry." << endl << "Goodbye! " << endl;
		exit (0);
	}
	
	for (int row = 1; row <= y; row++){
		for (int col = 1; col <= x; col++){
			if ( row == (x / 2 + 1) && col == (y /2 + 1))cout << "+";
			else if (col == ( y / 2 + 1)) cout << "|";
		    else if (row == (y / 2 + 1)) cout << "-";
			else cout << " ";
		}
		cout << endl;
	}
}
