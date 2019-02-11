#include <iostream>
using namespace std;

int main(){
  int age;

  cout << "Kindly enter your age: " << endl;
  cin >> age;
  
  if ( age >= 65)
    cout << "Welcome to the senior club, you get a discount!" << endl;
  else if ( age >= 18 && age < 65)
    cout << "You are an adult, the best phase of your life!" << endl;
  
  return 0;
}
