#include<iostream>
using namespace std; int main ()
{
int*  l;	
int a=26,b=69;
l=new int;
*l=a*b;
cout<<"Explicit  Heap  Dynamic  Allocation:"<<*l<<endl;
delete  l;
cout<<"Explicit  Heap  Dynamic  Deallocation:"<<*l<<endl;
}


