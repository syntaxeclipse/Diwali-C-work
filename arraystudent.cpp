#include <iostream>
using namespace std;
struct Student {
    int rollNo;
    float marks;
};

void printStudent(Student s) {
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    
    Student students[5];
    for (int i = 0; i < 5; i++) {
   cout << "Enter details for student " << i + 1 << ":" << endl;
    cout << "Roll No: ";
  cin >> students[i].rollNo;
      cout << "Marks: ";
     cin >> students[i].marks;
     cout << endl;
    }

    for (int i = 0; i < 5; i++) {
   cout << "Details of student " << i + 1 << ":" << endl;
  printStudent(students[i]);
  cout << endl;
    }

    return 0;
}