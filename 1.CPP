#include<iostream.h>
#include<conio.h>
int max1(int n[5],int z)
{ int x,y,j;
   x=n[0]; int x2=n[0];
  for(int i=0;i<5;i++)
 {   if(x2<n[i]) {x2=x;}
     if(x<n[i]) {x=n[i];}
 }
 if(z==1){return x;}
 else if(z==2){return x2;}
}
int min(int n[5],int z)
{ int x,y,j,y2;
  y=n[0];  y2=n[0];
  for(int i=0;i<5;i++)
 { if(y2>n[i]) {y2=y;}
  if(y>n[i]) {y=n[i];} }
  if(z==1){return y;}
 else if(z==2){return y2;}
}
int main()
{ clrscr();
 int a[5],z,u,n,q;
  cout<<"ENTER ITEMS:-\n";
  for(int i=0;i<5;i++)
   { cin>>a[i]; }
   cout<<"\nINDEX-\t"; cin>>n;
   cout<<"\nQQQ-\t"; cin>>q;
 if (n==2)
{ z=max1(a,q);
 cout<<"MAX-"<<z;}

 if (n==1)
 {u=min(a,q);
 cout<<"\n"<<"MIN-"<<u;}
  getch();
}