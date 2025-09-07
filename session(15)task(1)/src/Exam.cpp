#include <exam.h>


Exam::Exam()
{

}
Exam::Exam(string examName, string courseCode, string examDate)
{
    this->examName = examName;
    this->courseCode = courseCode;
    this->examDate = examDate;
}
void Exam::setExamName(string examName)
{
    this->examName = examName;
}
void Exam::setCourseCode(string courseCode)
{
    this->courseCode = courseCode;
}
void Exam::setExamDate(string examDate)
{
    this->examDate = examDate;
}
string Exam::getExamName()
{
    return examName;
}
string Exam::getCourseCode()
{
    return courseCode;
}
string Exam::getExamDate()
{
    return examDate;
}
void Exam::printExam()
{
    cout << "The Exam Name Is: " << examName << endl;
    cout << "The Course Code Is: " << courseCode << endl;
    cout << "The Exam Date Is: " << examDate << endl;
}
