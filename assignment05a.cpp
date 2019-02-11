#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Enter a positive number: " << endl;
	cin >> n;
	
	while (n < 0){
		cout << "Invalid entry! \nEnter a positive number: " << endl;
		cin >> n; 
	}
	
	int space = 2*n-1;
	
	for (int i = 1; i < n; i++){
	  for (n = 1; n < space; n++){
		cout << " ";
	  }
      space -= 1;
	  for (int m = 1; m <= i; m++){
		cout << "*";
	}
		cout << endl;
	}    
    
	for (int rows = n; rows >= 1; rows--){
      for (int cols = n; cols >= 1; cols--){
        cout << "*";
      }
      cout << endl;
    }  
return 0;
}
