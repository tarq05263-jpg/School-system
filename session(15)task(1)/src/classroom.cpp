#include <classroom.h>


Classroom::Classroom()
{

}
Classroom::Classroom(int roomNumber, int capacity)
{
    this->roomNumber = roomNumber;
    this->capacity = capacity;
}
void Classroom::setRoomNumber(int roomNumber)
{
    this->roomNumber = roomNumber;
}
void Classroom::setCapacity(int capacity)
{
    this->capacity = capacity;
}
int Classroom::getRoomNumber()
{
    return roomNumber;
}
int Classroom::getCapacity()
{
    return capacity;
}
void Classroom::printClassroom()
{
    cout << "The Room Number Is: " << roomNumber << endl;
    cout << "The Capacity Is: " << capacity << endl;
}
