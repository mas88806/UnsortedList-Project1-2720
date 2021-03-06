/*
UnsortedListTest.cpp
Author: Max Strauss
Submission Date: [Submission date here]
Purpose: A brief paragraph description of the program. What does it do?
Has all my test cases main method and printList function.
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
#include <cstdlib>
#include <string>
#include <ostream>
#include "stud.h"
#include "UnsortedList.h"
#include "UnsortedList.cpp"

using namespace std;

ostream& operator<<(ostream& out, Student s){
  out << "ID: " << s.getId() <<"  Name: " << s.getName() <<"  Major: " << s.getMajor();
  return out;
}


template<class ItemType> void printList(UnsortedList<ItemType> &list){
  list.resetList();
  if(list.getLength() == 0) return;
  for(int i = 0; i < list.length; i++){
    cout << list.getnextItem() << endl;
  }
}

int main(){
   UnsortedList<int> list;
   UnsortedList<int> list2;
   UnsortedList<int> list3;
   for(int i = 0; i < 5; i++){
     list.putItem(i);
}
     list2.putItem(7);

  //Integer Tests
   //Test 1
   cout << "***Integer Tests***\n" << "Test 1:" << endl;
   cout << list.getLength() << endl; //50
   cout << list.getnextItem() << endl; //0

   //Test 2
   cout << "Test 2:" << endl;
   cout << list2.getLength() << endl; //50
   list2.deleteItem(1);
   cout << list2.getLength() << endl; //49

   //Test 3
   cout << "Test 3:" << endl;
   cout << list.getnextItem() << endl; list.resetList();  //2
   cout << list.getnextItem() << endl; //0

   //Test 4
   cout << "Test 4:" << endl;
   for(int a = 1; a <= 10; a++)
     list3.putItem(a);
     printList(list3);

   //Test 5
     cout << "Test 5:" << endl;
     list3.splitLists(5,list,list2);
     cout << list.getLength() << "\n" << list2.getLength() << endl;//5 and 5

     
     
     //Student Tests
     //Test 1
      cout << "***Student Tests***\n" << "Test 1:" << endl;
      UnsortedList<Student> studList;
      Student max(1, "Max", "Math");
      cout << max << endl;
      
      //Test 2
      cout << "Test 2:" << endl;
      studList.putItem(max);
      cout << studList.getnextItem() << endl;      

      //Test 3
      cout << "Test 3:"  << endl;
      Student sam(2, "Sam", "Statistics");
      Student zach(3, "Zach", "Computer Science");
      studList.putItem(sam); studList.putItem(zach);
      cout << studList.getnextItem() << endl; studList.resetList();
      cout << studList.getnextItem() << endl;

      //Test 4
      cout << "Test 4:" << endl;
      cout << studList.getLength() << endl; studList.deleteItem(max);
      cout << studList.getLength() << endl;


      //Test 5
      cout << "Test 5:" << endl;
      Student steve(4, "Steve", "Computer Sciene");
      Student danny(5, "Danny", "English");
      studList.putItem(steve); studList.putItem(max); studList.putItem(danny);
      printList(studList);

      //Test 6
      cout << "Test 6:" << endl;
      Student april(7, "April", "Genetics");
      studList.deleteItem(april);


      //Test 7
      cout << "Test 7:" << endl;
      UnsortedList<Student> split1; UnsortedList<Student> split2;
      studList.splitLists(steve, split1, split2);
      cout << "Split1:" << endl;
      printList(split1);
      cout << "Split2:" << endl;
      printList(split2);

      //Test 8
      cout << "Test 8:" << endl;
      UnsortedList<Student> test;
      test.splitLists(max, split1, split2);      
      
      return EXIT_SUCCESS;
}
