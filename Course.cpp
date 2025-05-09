#include "Course.h"

Course::Course(std::string name, std::string letterGrade, int creditHours)
    : name(name), letterGrade(letterGrade), creditHours(creditHours) {
}

double Course::getGradePoint() const {
    if (letterGrade == "A") return 4.0;
    if (letterGrade == "B") return 3.0;
    if (letterGrade == "C") return 2.0;
    if (letterGrade == "D") return 1.0;
    return 0.0; // F or invalid
}

int Course::getCreditHours() const {
    return creditHours;
}

std::string Course::getName() const {
    return name;
}

std::string Course::getLetterGrade() const {
    return letterGrade;
}
