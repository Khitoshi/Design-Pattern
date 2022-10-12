#include <iostream>
#include "Student.h"
#include "StudentList.h"
#include "StudentListIterator.h"

using namespace std;

int main() {

    StudentList studentList(4);

    Student student;

    student.SetName("aaa");
    student.SetSex("otoko");
    studentList.Add(student);

    student.SetName("bbb");
    student.SetSex("onna");
    studentList.Add(student);

    student.SetName("ccc");
    student.SetSex("otoko");
    studentList.Add(student);

    student.SetName("ddd");
    student.SetSex("onna");
    studentList.Add(student);


    Iterator* it = studentList.iterator();

    while (it->HasNext()) {
        Student student = it->Next();
        cout << student.GetName() << " " << student.GetSex() << endl;
    }

    delete it;
    return 0;
}