#include "StudentList.h"
#include "Student.h"
#include "StudentListIterator.h"


StudentList::StudentList(const int MaxSize):last(0)
{
    students = new Student[MaxSize];
}
StudentList::~StudentList()
{ 
    delete[] students; 
};

Student const StudentList::GetStudentAt(int index) 
{ 
    return this->students[index]; 
}

void StudentList::Add(Student student)
{ 
    this->students[last] = student;
    last++;
}

int const StudentList::GetLength() 
{ 
    return last;
}

Iterator* StudentList::iterator() 
{ 
    return new StudentListIterator(this);
}