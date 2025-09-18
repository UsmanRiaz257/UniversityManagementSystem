#ifndef COURSE_H
#define COURSE_H
#include<string>
#include<iostream>
#include<vector>
class Course{
    private:
        std::string courseName;
        int courseCode;
        std::string credits;
        std::vector<std::string>enrolledStudents;
    public:
        void addStudent(std::string student);
        void removeStudent(std::string student);
        void displayStudents();
        ~Course(){
            enrolledStudents.clear();
        }

};
#endif