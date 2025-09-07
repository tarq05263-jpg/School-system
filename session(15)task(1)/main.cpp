#include <student.h>
#include <teacher.h>
#include <staff.h>
#include <School.h>
#include <iostream>
using namespace std;
int main()
{
    Student s("Mostafa", 22, "Male", "Cairo", "01117443387", "mostafa@gmail.com", 1, "Second Year", 3.5);
    Student s1("Mostafa", 22, "Male", "Cairo", "01117443387", "mostafa@gmail.com", 1, "Second Year", 3.5);
    Student s2("Mostafa", 22, "Male", "Cairo", "01117443387", "mostafa@gmail.com", 1, "Second Year", 3.5);
    Student s3("Mostafa", 22, "Male", "Cairo", "01117443387", "mostafa@gmail.com", 1, "Second Year", 3.5);
    School sch;
    sch.addStudent(s);
    sch.addStudent(s1);
    sch.addStudent(s2);
    sch.addStudent(s3);


    return 0;
}
