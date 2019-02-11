#include <iostream>
using namespace std;

int main(){
 
  for (int rows = 1; rows <= 10; rows++){
    cout << rows << "|\t";
    for (int cols = 1; cols <= 10; cols++){
      if ( rows * cols < 10) cout << " ";
      cout << rows * cols << " ";
      
    }
    cout << endl;
  }
  return 0;
}
