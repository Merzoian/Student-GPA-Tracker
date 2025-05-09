#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    std::string name;
    std::string letterGrade;
    int creditHours;

public:
    Course(std::string name, std::string letterGrade, int creditHours);

    double getGradePoint() const;  // Convert letter grade to GPA points
    int getCreditHours() const;
    std::string getName() const;
    std::string getLetterGrade() const;
};

#endif
