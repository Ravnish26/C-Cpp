#include<iostream.h>
#include<conio.h>
int main()
{ int a[5][5],max,max2,min2,min,i,j;
clrscr();
 cout<<"ENTER ELEMENTS\n";
 for(i=0;i<2;i++)
 { for(j=0;j<2;j++)
   {cin>>a[i][j];} }
      max=a[0][0]; min=a[0][0]; max2=max; min2=min;
 for(i=0;i<2;i++)
  { for(j=0;j<2;j++)
    { if(a[i][j]>max2)
	 {max2=max;}
     if(a[i][j]>max)
	   { max=a[i][j];}
     if(a[i][j]<min2)
	   {min2=min;}
     if(a[i][j]<min)
	   {min=a[i][j];}
 }}
  cout<<"\nMAX-\t"<<max<<"\nMAX2-\t"<<max2;
  cout<<"\nMIN-\t"<<min<<"\nMIN2-\t"<<min2;
  getch();
}
