#include"Person.h"
#include<iostream>
void Person::setName(string Name){
    Person::name=Name;
}
void Person::setAge(int Age){
    Person::age=Age;
}
void Person::setId(string Id){
    Person::id=Id;
}
string Person::getName(){
    return Person::name;
}
int Person::getAge(){
    return Person::age;
}
string Person::getId(){
    return Person::id;
}
Person::Person():name(""),age(0),id(""),email(""){
}
Person::Person(string name,int age,string id, string email)
    :name(name),age(age),id(id),email(email){
}
Person::Person(const Person& other){
    name =other.name;
    age = other.age;
    email =other.email;
    id = other.id;
}