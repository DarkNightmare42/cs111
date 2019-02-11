#include <iostream>
using namespace std;

double middle(double a, double b, double c, double d, double e){
}

void readIn(int b[][4], int row, int col){
	for(int r = 0; r < row; r++){
		for(int c = 0; c < col;c++){
			cout << "Enter single value for row " << r+1 <<": ";
			cin >> b[r][c];
		} 
		cout << endl;
	}	
}

void sum(int b[], int a, int c[][2]){
}

int largestCol(int b[][4], int row, int col){
    int index = 0, sum = 0, temp =0;
    for(int r = 0; r < row; r++){
		for(int c = 0; c < col; c++){
			if (c < col){
			    sum += b[r][c];
			    if (sum > temp ){
				    temp = sum;
				    sum = 0;
				    index = c;
			    }
			    else sum = 0;
			}
		}
    }
    return index;
}
int main() {
  double a[] = {1.1, 2.2, 3.3};
  int b[4][4] = {0};
  a[0] = middle(a[0], a[1], a[1], a[2], a[2]); 	// (a) sets a[0] as the middle value (median of the parameter values)
  readIn(b, 4, 4);				// (b) read in the entries of a 2-dimentional array with 4 rows and 4 columns from the user and save to parameter array b.
  b[3][3] = sum(b[1], 4, b[2][2]); 		// (c) adds elements from array and store it into b[3][3]
  int col_index = largestCol(b, 4, 4); 		// (d) col_index has the index of the column that contains the greatest column sum
  cout << "Largest column: " << endl;
  for (int r = 0; r < 4; r++){
    cout << b[r][col_index] << " ";
    cout << endl;
  }
  return 0;
}

