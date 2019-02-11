#include <iostream>
#include <string>
using namespace std;

char read(string){
}

double magic(double, double){

}

double isOk(double){
}

string print(string){
}

bool check(int, int){
}

int firstDigit(int a){
	while (x > 9) { x /= 10;
	}
	return x;
}



int main(){
   int a = 100;
   string b = read();			
   double c = magic(a + 2.5);
   if ( isOk(c) )
     print(b);

   if ( check(a + 1) == 'b' ) cout << "It's ascii value 97";

   cout << firstDigit(a) << endl;  //this would print out the first digit of variable a

   return 0;
}
