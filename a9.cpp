#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int shortestLen(string x[], int a){
	int shortest = x[0].length();
	for(int i = 0; i < a; i++){
		if ((int)x[i].length() < shortest){
			shortest = x[i].length();
			}
	}
	return shortest;
}

void triangle(int x){
	int offset = 0;
    for (int r = 1; r <= x; r++){
        for (int c = 1; c <= r; c++){
          cout << (char) (65+offset);
          offset++;
          offset = offset % 26;
    	}
        cout << endl;
    }
}

bool isPalindrome(string check){
	transform(check.begin(), check.end(), check.begin(), ::tolower);
	if (check == string(check.rbegin(), check.rend())){ return true;
	}
	return false;
}

int main(){
   string x[5] = {"This", "is", "one", "example", "!!"};
   int shortest_length = shortestLen(x, 5);
   for (int i = 0; i < 5; i++) if (x[i].size() == shortest_length) cout << x[i] << endl; //prints:is !!
   triangle(5);

   string word[6] = {"Dad", "noon", "raceCar", "Mon", "Greg", "A"};
   for (int i = 0; i < 6; i++) cout << isPalindrome(word[i]); //prints: 111001
   cout << endl;
   return 0;
}

