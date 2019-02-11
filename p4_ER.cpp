#include <iostream>
using namespace std;

void display(int x){
    if (x < 10) {
        if  (x == 1) cout << 1;
        else for(int i=1; i <= x; i++){ cout << i;}
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
