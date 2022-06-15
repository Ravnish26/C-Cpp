#include <iostream>
using namespace std;
int count;
int binaryIterativeSearch(int arr[], int l, int r, int x) { 
while (l <= r) 
{ count++;  
    int m = l + (r-l)/2; 
	if (arr[m ] == x) return m ; count++;
	 
    if (arr[m] < x){count++;
		l = m + 1; 
	}else{count++;
		r = m - 1; 
    } 
}
count++;
return -1; 
} 
int main(){ 
int arr[] = {12, 13,99, 100, 420}; 
int n = sizeof(arr)/ sizeof(arr[0]); count=count+n;
int x = 99; count++;
int result = binaryIterativeSearch(arr, 0, n-1, x);count++; 
if(result == -1){count++;
cout<<"Element is not present in array";
} else {count++;
cout<<"Element is present at index "<< result; }
count++;
cout<<"\n"<<"Count is : "<<count;
return 0; 
} 
