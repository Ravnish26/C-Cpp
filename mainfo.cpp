#include <iostream> 
using namespace std; 


void Fuc() { 
cout << " A MESSAGE "<< endl; 
} 
void Fuc(int a) { 
cout << " Here is int " << a << endl; 
} 
void Fuc(int a, int b) { 
cout << " Here are 2 int " << a+b << endl; 
} 
void Fuc(double a, double b) { 
cout << " Here are 2 float " << a+b << endl; 
} 

int main() { 
Fuc(); 
Fuc(10); 
Fuc(10,20); 
Fuc(10.10,69.42);  
return 0; 
}

