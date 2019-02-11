#include <iostream>
using namespace std;

void display(int x){
	int base = 1;
    if (x < 10) {
        if  (x == base) cout << base;
        else for(int i=0; i < x; i++){ cout << base; 
		base++;}
		cout << endl;
        return;
    }
    display(x / 10);
    display(x % 10);
    return;
}


int main(){
	display(31415);
	return 0;
}
