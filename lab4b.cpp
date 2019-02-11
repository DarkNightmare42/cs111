#include <iostream>
using namespace std;

int main(){
  int score;
  char a, b, c, d, f;
  a = 'A';
  b = 'B';
  c = 'C';
  d = 'D';
  f = 'F';

  cout << "Enter numerical test score: " << endl;
  cin >> score;
 
  if (score >= 90)
   cout << a <<  endl;
  else if (score >= 80  && score < 90)
   cout << b << endl;
  else if (score >= 70 && score < 80)
   cout << c << endl;
  else if (score >= 60 && score < 70)
   cout << d << endl;
  else 
   cout << f << endl;
  return 0;
}
