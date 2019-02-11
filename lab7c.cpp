#include <iostream>
using namespace std;

int main(){
	int input;
	
	cout << "Enter a positive integer: " << endl;
	cin >> input;
	
	while (input < 1){
		cout << "Invalid entry!" << endl << "Enter a positive integer: " << endl;
		cin >> input;
	}
	for (int n = input; n >= 1; n--){
		for (int m = 1; m <= n; m++){
		  cout << "*";
		  for (int i = n; i >= 0; i--){
		  	for (int o = 1; o <= i; o++){
		  	//if (i == n)cout << " ";
		  	cout << "*";
		  }
		  }
		} 
	cout << endl;
	}
	return 0;
}
