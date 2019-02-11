#include <iostream>
using namespace std;

int main(){
	string name[10];
	int grade[10];
	
	for (int i = 0; i < 10; i++){
		cout << "Enter " << i <<"'s student name: " << endl;
		cin >> name[i];
		cout << "Enter " << i << "'s grade: " << endl;
		cin >> grade[i];
	}
	cout << endl;
	int sum=0;
	for (int i = 0; i < 10; i++){
		sum += grade[i];
	}
	
	sum /= 10;
	
	for(int i = 0; i < 10; i++){
		if(grade[i] > sum) cout << name[i] << " got a higher than average grade." << endl;
	}
	return 0;
}
