#include <iostream>  
using namespace std;  
  
void callValue(int x, int y)  
{  
 x+=16;
 y+=19;
 cout<<"\nx="<<x;
 cout<<"\ny="<<y; 
}
int main()  
{  
int x= 10;
int y= 50;  
cout<<"before calling function:";
cout<<"\nx="<<x;
cout<<"\ny="<<y;  
cout << "\nafter calling function:";
callValue(x,y);  
return 0;  
}  

