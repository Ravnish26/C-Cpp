#include <iostream>
using namespace std;
int main()
{
  int first,second,third;
  int max=0,min=0,mid=0;
  cout<<"Enter 1st="; 
  cin>>first;
  cout<<"\nEnter 2nd=";
  cin>>second;
  cout<<"\nEnter 3rd=";
  cin>>third;
if(first > second && first > third) {
    max = first;
    if (second > third) {
                mid = second;
                min = third;
            } else {
                mid = third;
                min = second;
            }
        } else if (second >= first && second >= third) {
            max = second;
            if (first > third) {
                mid = first;
                min = third;
            } else {
                mid = third;
                min = first;
            }
        }
        else {
            max = third;
            if (first > second) {
                mid = first;
                min = second;
            } else {
             mid = second;
             min = first;
            }
        }
        cout<<"MAX="<<max;
        cout<<"MID="<<mid;
        cout<<"MIN="<<min;
	return 0;
}
