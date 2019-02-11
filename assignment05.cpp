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
		
	for(int i = 1; i<= n; i++){
	  for (int j=1; j <= n; j++){
	  	if (j<= n-i) cout << " ";
	  	else cout << "*";
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
