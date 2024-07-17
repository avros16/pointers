#include <iostream>
using namespace std;
void square (int &);

int main() {

int a{2};
  square(a);
  
  cout << "the value of a is " << a;


    }
void square (int & aRef) {
  aRef = aRef * aRef;
}