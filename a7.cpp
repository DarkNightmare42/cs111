#include <iostream>
using namespace std;

void readIn(int &n){
  cout << "Enter an integer: " << endl;
  cin >> n;
}

void doubleOdd(int n){
  if (n < 0) return;
  if (n / 10 > 0){
    doubleOdd(n / 10);            
  }
  int num = n % 10;
  if (num % 2 == 0) cout << num;
  else cout << num << num; 
}

int factorial(int x){
  if (x == 1 || x == 0) return 1;
  return x * factorial(x - 1);
}
int main(){
  int in;
  readIn(in);
  cout << in << endl; 
  cout << "Doubled odd ";
  doubleOdd(in);
  cout << endl;
  int f;
  if (in >= 0) {
    f = factorial(in);
    cout << in << "! = " << f << endl;
  }
  return 0;
}
