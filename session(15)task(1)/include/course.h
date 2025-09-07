#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;

class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    Course();
    Course(string courseCode, string courseName, string teacherName);
    void setCourseCode(string courseCode);
    void setCourseName(string courseName);
    void setTeacherName(string teacherName);
    string getCourseCode();
    string getCourseName();
    string getTeacherName();
    void printCourse();
};

#endif
