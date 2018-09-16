/*
File Name: stud.h
Author: Max Strauss
Submission Date: Jan 25 2017
Purpose: A header file
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

#ifndef STUD_H
#define STUD_H
#include <string>
#include <iostream>
#include <cstdlib>
#include <ostream>

using namespace std;

class Student{
 private:
  int id;
  string name;
  string major;

 public:
  Student();  //default constructor

  Student(int i, string n, string m); //constructor

  int getId();

  void setId(int i);

  string getName();

  void setName(string n);

  string getMajor();

  void setMajor(string m);

  bool operator ==(Student& s);

  Student& operator =(Student& s);

  bool operator >(Student& s);

  bool operator <(Student& s);

  bool operator <=(Student& s);
};
//ostream& operator<<(ostream out, Student s);

#endif
