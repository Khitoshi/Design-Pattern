#pragma once

#include "Iterator.h"

class StudentListIterator :public Iterator
{
private:
    StudentList* studentList;
    int index = 0;
public:
    StudentListIterator(StudentList* studentList)
    {
        this->studentList = studentList;
    }

    virtual ~StudentListIterator() {};

    bool HasNext()override
    {
        if (index < studentList->GetLength()) return true;
        return false;
    }

    Student Next()override
    {
        Student student = studentList->GetStudentAt(index);
        index++;
        return student;
    }
};