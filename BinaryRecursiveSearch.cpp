#include <iostream>
using namespace std;
int count;
int BinaryRecursiveSearch(int arr[],int l,int r, int x)
{ count++;
    if (r >= l) 
   {    int mid = l + (r - l)/2; count++;
        if (arr[mid] == x)  return mid; count++;
        if (arr[mid] > x) return BinaryRecursiveSearch(arr, l, mid-1, x); count++;
        return BinaryRecursiveSearch(arr, mid+1, r, x); 
   } 
   count++;
   return -1; 
} 
int main() 
{ 
   int arr[] = {12, 13, 14, 99, 420}; 
   int n = sizeof(arr)/ sizeof(arr[0]); count=count+ n;
   int x = 99; 
   int result = BinaryRecursiveSearch(arr, 0, n-1, x); 
   count++;
   if(result == -1){
   cout<<"Element is not present in array";count++; 
   }else{
   cout<<"Element is present at index "<< result;count++; }
   count++; cout<<"\n"<<"count is : "<<count;
   return 0; 
} 
