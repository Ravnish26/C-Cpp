#include<iostream>
using namespace std; 
int max(int a, int b) { return (a > b) ? a : b; } 
int ks(int W, int wt[], int val[], int n) 
{ 	
if (n == 0 || W == 0) 
  return 0; 
  if (wt[n] > W) 
  return ks(W, wt, val, n - 1); 
  else
    return max(val[n] + ks(W - wt[n], wt, val, n - 1),ks(W, wt, val, n - 1)); 
} 
int main() 
{ 	int val[] = { 26, 42, 30 }; 
	int wt[] = { 1, 2, 3 }; 
	int W = 15; 
	int n = sizeof(val) / sizeof(val[0]); 
	cout <<"Maximum Profit is: "<<ks(W, wt, val, n); 
	return 0; 
} 
