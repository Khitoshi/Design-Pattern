#pragma once

#include "Aggregate.h"
#include <iostream>

class Student;
class Iterator;


class StudentList :public Aggregate
{
private:
    Student* students;
    int last;
public:

    StudentList(const int MaxSize);
    virtual ~StudentList();
    Student const GetStudentAt(int index);
    void Add(Student student);
    int const GetLength();
    Iterator* iterator()override;
};