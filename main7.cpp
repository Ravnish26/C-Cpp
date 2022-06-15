#include<iostream>
using namespace std;
class Complex
{
public:
int real,img;

//add function to add two matrices
void add(Complex c1,Complex c2)
{
int x,y;
x=c1.real+c2.real;
y=c1.img+c2.img;
cout<<"\n("<<c1.real<<"+"<<c1.img<<"i)+("<<c2.real<<"+"<<c2.img<<"i)=("<<x<<"+"<<y<<"i)";
}
};
int main ()
{
Complex a,b,c,d,e;
cout<<"\nEnter real and imaginary part of first complex number:";
cin>>a.real>>a.img;
cout<<"\nEnter real and imaginary part of second complex number:";
cin>>b.real>>b.img;
c.add(a,b);
}
