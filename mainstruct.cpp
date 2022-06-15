#include <iostream>
using namespace std;

struct student1
{
    char name[50];
    int roll;
    double CGPA;
    char subject[10];
};

union student2
{
   char grade;
   double percentage;
   int totalMarks;
};

enum sub { ada,ds, data, ppl, java, mobile, web };

int main() 
{   struct student1 s1;
    union student2 s2;
    cout << "Enter information: " << endl;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cout << "Enter CGPA: ";
    cin >> s1.CGPA;
    cout << "Enter subject: ";
    cin >> s1.subject;
    
    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "CGPA: " << s1.CGPA << endl;
    cout << "subject: " << s1.subject << endl;
    
	cout << "Enter grade: ";
    cin >> s2.grade;
    cout << "Enter percentage: ";
    cin >> s2.percentage;
    cout << "Enter total Marks: ";
    cin >> s2.totalMarks;
    
    cout << "grade: " << s2.grade << endl;
    cout << "percentage : " << s2.percentage << endl;
    cout << "total Marks: " << s2.totalMarks << endl;
    enum sub s;
    s = ada;
    cout << "Subject = " << s << endl;
	return 0;
}



