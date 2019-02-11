#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool isPalindrome(string check){
	transform(check.begin(), check.end(), check.begin(), ::tolower);
	if (check == string(check.rbegin(), check.rend())){ return true;
	}
	return false;
}

int main(){
	string word[6] = {"Dad", "noon", "raceCar", "Mon", "Greg", "A"};
   for (int i = 0; i < 6; i++) cout << isPalindrome(word[i]); //prints: 111001
   cout << endl;
	   return 0;
}
