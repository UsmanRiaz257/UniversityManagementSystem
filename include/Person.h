#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
using namespace std;
class Person{
    private:
        string name;
        int  age;
        string id;
    
    protected:
        string email;
    public: 
        void setName(string Name);
        void setAge(int Age);
        void setId(string Id);
        string getName();
        int getAge();
        string getId();
        Person();
        Person(string name,int age,string id, string email);
        Person(const Person& other);
        ~Person(){
            cout<<"GoodBye from  "<<name<<endl;
        }
    
};
#endif