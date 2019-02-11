#include <iostream>
using namespace std;

int main(){

  for (int i = 10; i >= 1; i--){
  	for (int m = 1; m <=i; m++){
  	cout << "*";
  	}
  	cout << endl;
  }
  for (int o = (10 * 2); o >= 10; o--){
  	for (int n = 11; n <= o; n++){
  	if (o == 10)cout << " ";
  	else cout << "*";
  	//cout << "*";
    }
    cout << endl;
  }
return 0;
}
