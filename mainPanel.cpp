#include <iostream>
using namespace std;

int main() {

int n,an=0,a,d,sn=0;
cout<<"Enter n:";
cin>>n;

cout<<"Enter a:";
cin>>a;

cout<<"Enter d:";
cin>>d;

for(int i=1;i<=n;i++){
an=a+(n-1)*d;
sn=sn+an;
}
cout<<"an:"<<an<<endl;
cout<<"sn:"<<sn<<endl;
return 0;
}
