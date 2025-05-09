#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Course.h"
#include "Contact.h"

class Student {
private:
    int id;
    std::string name;
    std::vector<Course> courses;
    std::shared_ptr<Contact> contactInfo;

public:
    Student(int id, std::string name);

    void addCourse(const Course& course);
    double calculateGPA() const;
    void display() const;

    int getId() const;
    std::string getName() const;

    void addContact();
};

#endif
