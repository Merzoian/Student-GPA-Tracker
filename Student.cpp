#include "Student.h"

Student::Student(int id, std::string name)
    : id(id), name(name), contactInfo(nullptr) {
}

void Student::addCourse(const Course& course) {
    courses.push_back(course);
}

double Student::calculateGPA() const {
    double totalPoints = 0.0;
    int totalCredits = 0;

    for (const auto& course : courses) {
        totalPoints += course.getGradePoint() * course.getCreditHours();
        totalCredits += course.getCreditHours();
    }

    return totalCredits == 0 ? 0.0 : totalPoints / totalCredits;
}

void Student::display() const {
    std::cout << "Student ID: " << id << ", Name: " << name
        << ", GPA: " << calculateGPA() << std::endl;

    for (const auto& course : courses) {
        std::cout << "  - " << course.getName() << " (" << course.getCreditHours()
            << " credits): " << course.getLetterGrade() << std::endl;
    }

    if (contactInfo) {
        contactInfo->display();
    }
}

int Student::getId() const {
    return id;
}

std::string Student::getName() const {
    return name;
}

void Student::addContact() {
    if (!contactInfo) {
        contactInfo = std::make_shared<Contact>();
    }
    contactInfo->input();
}
