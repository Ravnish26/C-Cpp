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
 void heapSort(int arr[], int n) 
{ 
      for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
 
    for (int i=n-1; i>0; i--) 
    { 

        heapify(arr, i, 0); 
    } 
} 
 void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) {
	      cout << arr[i] << " "; }
    cout << "\n"; 
} 
int main() 
{ 
    int arr[] = {2, 4, 6, 8, 10,12}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    heapSort(arr, n); 
  
    cout << "Sorted array is \n"; 
    printArray(arr, n); 
} 
