#include <iostream>
using namespace std;
int count;
int LinearSearch(int arr[],int n, int x)
{ for(int i=0;i<n;i++)   
 {	count++;
    if(arr[i]==x)
	return i; count++;
 }
	return -1;
}
int main()
{   int arr[] = { 12, 13, 14,99, 420 };
    int x = 99;
    int n = sizeof(arr) / sizeof(arr[0]);count=count+n;
    int result = LinearSearch(arr, n, x);
    count++;
    (result == -1) ? cout << "Element is not present in array"
    : cout << "Element is present at index " << result;
    count++;
    cout<<"\n"<<"count is :"<<count;
	return 0;
}
