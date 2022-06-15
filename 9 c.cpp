#include <iostream>
using namespace std;

int main() {

  int num1 = 5 - 17 * 6; 
  int num2 = 5 - (17 * 6);
  int num3 = (5 - 17) * 6;
  cout <<"Operators Precedence"<< endl;
  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;
  cout << "num3 = " << num3 << endl;

  int a = 1;
  int b = 4;
  b += a -= 6;
  cout <<"Operators Associativity"<< endl;
  cout << "a = " << a << endl; ;
  cout << "b = " << b;

  return 0;
}
