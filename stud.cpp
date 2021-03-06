/*
stud.cpp
Author: Max Strauss
Submission Date: Jan 25 2017
Purpose: A brief paragraph description of the program. What does it do?
Statement of Academic Honesty:
The following code represents my own work. I have neither received nor given inappropriate
assistance. I have not copied or modified code from any source other than the course webpage or
the course textbook. I recognize that any unauthorized assistance or plagiarism will be handled in
accordance with the University of Georgia's Academic Honesty Policy and the policies of this
course. I recognize that my work is based on an assignment created by the Department of
Computer Science at the University of Georgia. Any publishing or posting of source code for this
project is strictly prohibited unless you have written consent from the Department of Computer
Science at the University of Georgia.
*/

#include <iostream>
#include <ostream>
#include "stud.h"
#include "UnsortedList.h"

Student::Student(){
  id = 0;
  name = "";
  major = "";
}

Student::Student(int i, string n, string m){
  id = i;
  name = n;
  major = m;
}

int Student::getId(){
  return id;
}

void Student::setId(int i){
  id = i;
}

string Student::getName(){
  return name;
}

void Student::setName(string n){
  name = n;
}

string Student::getMajor(){
  return major;
}

void Student::setMajor(string m){
  major = m;
}

Student& Student::operator =(Student& s){
  setId(s.getId());
  setName(s.getName());
  setMajor(s.getMajor());
}

bool Student::operator ==(Student& s){
  int x = getId();
  int y = s.getId();
  if ((x==y))
    return true;
  else
    return false;
}

bool Student::operator >(Student& s){
  int x = getId();
  int y = s.getId();
  if (x>y)
    return true;
  else
    return false;
}

bool Student::operator <(Student& s){
  int x = getId();
  int y = s.getId();
  if (x<y)
    return true;
  else
    return false;
}

bool Student::operator <=(Student& s){
  int x = getId();
  int y = s.getId();
  if ((x<y) || (x==y))
    return true;
  else
    return false;
}

/*ostream& operator<<(ostream& out, Student s){
  out << "ID: " << s.getId() <<"  Name: " << s.getName() <<"  Major: " << s.getMajor();
  return out;
  }*/
