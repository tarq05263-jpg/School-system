#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;

class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam();
    Exam(string examName, string courseCode, string examDate);
    void setExamName(string examName);
    void setCourseCode(string courseCode);
    void setExamDate(string examDate);
    string getExamName();
    string getCourseCode();
    string getExamDate();
    void printExam();
};

#endif
