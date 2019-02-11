#include <iostream>
#include <string>
using namespace std;

int main(){
  string user_name, user_phone, user_email; 
  int user_birth_year, user_current_age;
    
  cout << "Please enter your name: " << endl;
  cin >> user_name;
  cout << "Please enter your phone number: " << endl;
  cin >> user_phone;
  cout << "Please enter your email address: " << endl;
  cin >> user_email;
  cout << "Please enter your birth year: " << endl;
  cin >> user_birth_year;

  user_current_age = 2018 - user_birth_year;

  cout << "Output \n";
  cout << "Name: " << user_name << "\nPhone: " << user_phone 
  << "\nEmail: " << user_email << "\nAge: " << puser_current_age 
  << endl;
  return 0;
}
