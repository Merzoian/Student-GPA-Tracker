#include <iostream>
#include <vector>
#include <memory>
#include "Student.h"

using namespace std;

vector<Student> students;
int studentCounter = 1;

Student* findStudentById(int id) {
    for (auto& student : students) {
        if (student.getId() == id) return &student;
    }
    return nullptr;
}

void menu() {
    int choice;
    do {
        cout << "\n--- Student GPA Tracker Menu ---\n";
        cout << "1. Add Student\n";
        cout << "2. Add Course to Student\n";
        cout << "3. Display All Students\n";
        cout << "4. Add Contact Info to Student\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name;
            cout << "Enter student name: ";
            cin >> name;
            students.emplace_back(studentCounter++, name);
            cout << "Student added!\n";
            break;
        }

        case 2: {
            int id;
            cout << "Enter student ID: ";
            cin >> id;
            Student* student = findStudentById(id);
            if (student) {
                string courseName, letterGrade;
                int credits;
                cout << "Course name: ";
                cin >> courseName;
                cout << "Credit hours: ";
                cin >> credits;
                cout << "Letter grade (A-F): ";
                cin >> letterGrade;
                student->addCourse(Course(courseName, letterGrade, credits));
                cout << "Course added!\n";
            }
            else {
                cout << "Student not found.\n";
            }
            break;
        }

        case 3: {
            for (const auto& student : students) {
                student.display();
                cout << "-------------------------\n";
            }
            break;
        }

        case 4: {
            int id;
            cout << "Enter student ID: ";
            cin >> id;
            Student* student = findStudentById(id);
            if (student) {
                student->addContact();
            }
            else {
                cout << "Student not found.\n";
            }
            break;
        }

        case 0:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 0);
}

int main() {
    menu();
    return 0;
}
