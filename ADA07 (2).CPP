#include<stdio.h>
#include<conio.h>
#include<math.h>

 void heapify(int a[],int n,int i)
 {
    int l=(2*i),r=(2*i)+1,largest=i,temp;
    if((l<=n)&&(a[l]>a[i]))
       largest=l;
    if((r<=n)&&(a[r]>a[largest]))
       largest=r;
    if(largest!=i)
    {
       temp=a[i];
       a[i]=a[largest];
       a[largest]=temp;
       heapify(a,n,largest);
    }
 }
 void insert(int a[],int n,int i)
 {
    a[n]=i;
    int tmp=a[n],p=n/2;
    while(a[p]<a[n])
    {
       a[n]=a[p];
       a[p]=tmp;
       n=p;
       p=n/2;
    }
 }

 void print(int a[],int n)
 {
    if(n<=0)
    {
       printf("\n\nFirst insert nodes");
       getch();
       return;
    }
    printf("\n\n");
    for(int i=1;i<=n;i++)
       printf("%d   ",a[i]);
    getch();
 }
 void dele(int a[],int n)
 {

    int highest=a[1];
    a[1]=a[n];
    n--;
    for(int i=n/2;i>=1;i--)
       heapify(a,n,i);
    printf("\n\nDeleted node is  =  %d",highest);
    getch();
 }

 int main()
 {  int a[33],ch=1,cho,x,n=0;
    while(ch==1)
    {   printf("\n\n1 -- Insert a node into priority\
       \n\n2 -- Delete the hightest weighted node by priority\
       \n\n3 -- Print the priority queue\
       \n\n4 -- Exit the program\n\n");
       scanf("%d",&cho);
       switch(cho)
       {
	  case 1:
	     printf("\n\nEnter the element to be inserted\n\n");
	     scanf("%d",&x);
	     n++;
	     insert(a,n,x);
	     break;
	  case 2:
	     if(n<=0)
	     {
		printf("\n\nThere is no node present");
		getch();
	     }
	     else
	     {
		dele(a,n);
		n--;
	     }
	     break;
	  case 3:
	     print(a,n);
	     break;
	  case 4:
	     ch=0;
       }
    }
 }
