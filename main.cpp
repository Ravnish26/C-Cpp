#include <iostream> //Preprocessor directive includes iostream header file
using namespace std; // Scope resolution 
int main() // main() function of type integer
{   int n, i; 
    float num[100], sum=0.0, average; // variable declaration 
    cout << "Enter the numbers of element: ";
    cin >> n;
    while (n > 100 || n <= 0) //for getting a particular range for n
    {   cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }
    for(i = 0; i < n; ++i) // taking elements from user end
    {
        cout << i + 1 << " . Enter number: ";
        cin >> num[i];
        sum += num[i]; // calculating sum
    }
    average = sum / n; // calculating average
    cout << "Average = " << average;
    return 0;  // return value
}
