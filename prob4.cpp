#include <iostream>
using namespace std;

void display(int x){
	int base = 1;
	if (x / 10 > 0){
		display(x / 10);
		display(x % 10);}
		for(int i = 0; i <= x; i++){
			cout << base;
			base++;
		}
		cout << endl;
		base = 0;
	}


int main(){
	display(31415);
	return 0;
}
