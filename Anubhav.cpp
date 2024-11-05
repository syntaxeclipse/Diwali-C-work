//Anubhav Dubey 231103018
#include <iostream>
using namespace std;

class Student {
private:
    struct StudentInfo {
        string name;
        int age;
        string reg_no;
        int roll_no;
        string semester;
        float attendance;
        float marks[5]; 
    };

    StudentInfo students[20]; 
    int studentCount;

public:
    Student() : studentCount(0) {}

    void getDetails(int n) { //here, sir i have created a function for student input
        studentCount = n > 20 ? 20 : n; 
        for (int i = 0; i < studentCount; ++i) {
            cout << "Enter details for student " << (i + 1) << ":\n";
            cout << "Name: "; cin >> students[i].name;
            cout << "Age: "; cin >> students[i].age;
            cout << "Registration Number: "; cin >> students[i].reg_no;
            cout << "Roll Number: "; cin >> students[i].roll_no;
            cout << "Semester: "; cin >> students[i].semester;
            cout << "Attendance: "; cin >> students[i].attendance;
            cout << "Marks for 5 subjects: ";
            for (int j = 0; j < 5; ++j) {
                cin >> students[i].marks[j];
            }
            cout << endl;
        }
    }

    void showDetails() const {  //here, sir i have created a function for showing details of student
        for (int i = 0; i < studentCount; ++i) {
            cout << "Name: " << students[i].name << "\n"
                 << "Age: " << students[i].age << "\n"
                 << "Reg No: " << students[i].reg_no << "\n"
                 << "Roll No: " << students[i].roll_no << "\n"
                 << "Semester: " << students[i].semester << "\n"
                 << "Attendance: " << students[i].attendance << "%\n"
                 << "Marks: ";
            for (int j = 0; j < 5; ++j) {
                cout << students[i].marks[j] << " ";
            }
            cout << endl;
        }
    }

    void showShortage() const { //for the show shortage less than 75%
        for (int i = 0; i < studentCount; ++i) {
            if (students[i].attendance < 75) {
                cout << "Roll No " << students[i].roll_no << ", Name: " << students[i].name << " has an attendance shortage.\n";
            }
        }
    }

    void getPercentage() const {   //to get the student percentage in float value 
        for (int i = 0; i < studentCount; ++i) {
            float total = 0;
            for (int j = 0; j < 5; ++j) {
                total += students[i].marks[j];
            }
            float percentage = (total / 500) * 100;
            cout << "Percentage for " << students[i].name << ": " << percentage << "%\n";
        }
    }

    void printAttendance() const {  
        for (int i = 0; i < studentCount; ++i) {
            cout << "Roll No: " << students[i].roll_no << ", Name: " << students[i].name << ", Attendance: " << students[i].attendance << "%\n";
        }
    }

    void showAbove90Percent() const {  //sir here those who have above 90% will be visible
        for (int i = 0; i < studentCount; ++i) {
            float total = 0;
            for (int j = 0; j < 5; ++j) {
                total += students[i].marks[j];
            }
            float percentage = (total / 500) * 100;
            if (percentage >= 90) {
                cout << "Student above 90%: Name: " << students[i].name << ", Percentage: " << percentage << "%\n";
            }
        }
    }
};

int main() {
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    Student s;
    s.getDetails(num_students);
    s.showDetails();
    s.showShortage();
    s.getPercentage();
    s.printAttendance();
    s.showAbove90Percent();

    return 0;
}