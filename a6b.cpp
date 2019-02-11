#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

bool largerThan9(int input){ //checks whether value is larger than 9 returns true or false
    if (input > 9) return true;
    return false;
}

int rollDice(){ //generates a random number between 1-6
	int x = (rand()%6) + 1;
    return x;
}

void emphasis(){ //printsout Yes! Finally statement when called
    string finally = "Yes! Finally. ";
    for(int i= 1; i <= 3; i++){ cout << finally;
    }
}

int main(){
	srand(time(NULL)); //sets seed
    string roll = "Roll dice: ";
    int sum;
    while ( sum < 1) { //main loop
        for(int j = 1; j <=3; j++){ //number of randoms numbers to be generated 
        	cout << roll;
		    for (int i = 1; i <=3; i++) { //numbers to be generated per line
			    int n = rollDice(); //random number generation
				cout << n << " " ;
                sum += n; //sum of the random numbers generated
            }
            if (largerThan9(sum) == true){ //calling of bool to check if condition has been met
                cout << endl;
		        emphasis();
                exit (0);
            } 
            else {
        	    sum = 0; //resets sum to continue loop if sum not greater than 9
                cout << endl;
            }
        
		}
    }
    cout << endl;
    return 0;
}
  
