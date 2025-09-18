#include"Student.h"
#include<iostream>
Student::Student(int n){
    numCourses=n;
    grades=new float[numCourses];}
Student::Student(const Student& array){
    int size = array.numCourses;
    grades=new float[size];
    for (int i=0;i<size;i++){
        grades[i]=array.grades[i];
    }
}
void Student::calculateGPA(){
    float Totalgrades=0;
    for (int i=0;i<Student::numCourses;i++){
        Totalgrades+=Student::grades[i];
    }
    Student::gpa=Totalgrades/Student::numCourses;
    std::cout<<gpa<<std::endl;
}
void Student::addGrade(int courseIndex,double grade){
    grades[courseIndex]=grade;
}
void Student::setGrades(float* Grades){  
    grades=Grades;
}