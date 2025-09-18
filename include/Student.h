#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include<vector>
#include<iostream>
class Student : public Person{
    private:
        int numCourses;
        float* grades;   
        float gpa;
        
    public:
        void setGrades(float* Grades);
        Student(int n);
        Student(const Student& array);
        void calculateGPA();
        void addGrade(int courseIndex,double grade);
        ~Student(){
            delete[] grades;
        }
};
#endif