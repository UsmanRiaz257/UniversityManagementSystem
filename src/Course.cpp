#include"Course.h"
void Course::addStudent(std::string student){
    enrolledStudents.push_back(student);
}
void Course::removeStudent(std::string student){
    int index=0;
    for (int i=0;i<enrolledStudents.size();i++){
        if( enrolledStudents[i]==student){
            index=i;
            break;
        }
    }
    enrolledStudents.erase(enrolledStudents.begin()+index);
}

void Course::displayStudents(){
    for (int i=0;i<enrolledStudents.size();i++){
        std::cout<<enrolledStudents[i]<<std::endl;

    }
 }       