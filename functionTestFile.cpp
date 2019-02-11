#include <iostream>
using namespace std;

void doubleOdd(int n){
	if (n < 0) return;
    if (n / 10 > 0){
      doubleOdd(n / 10);            
    }
    int num = n % 10;
    if (num % 2 == 0) cout << num;
    else cout << num << num; 
}

int main()
{
  int x = 33112266;
  doubleOdd(x);
  cout << endl;
  return 0;
}

