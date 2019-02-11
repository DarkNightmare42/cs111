#include <iostream>
using namespace std;

void biggerDigit(int i, int x){
    if (i < 10 && x < 10) {
        if  (i > x) cout << i;
        else cout << x;
        return;
    }
    biggerDigit(i / 10, x / 10);
    biggerDigit(i % 10, x % 10);
    return;
}

int main(){
    int i = 0, x = 0;
    
    cout << "Enter a number: " << endl;
    cin >> i >> x;
    biggerDigit(i, x);
    return 0;
}
