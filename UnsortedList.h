/*
UnsortedList.h
Author: Max Strauss
Submission Date: Jan 25 2017
Purpose: Header file
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

#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

template <class ItemType>class UnsortedList{
 public:

  int MAX_ITEMS, curpos, length;
  ItemType* info;

  UnsortedList();  //Default constructor

  UnsortedList(int n);  //Constructor to set the MAX_ITEMS constant

  ~UnsortedList();

  void makeEmpty();  //Initializes list to empty state

  bool isFull();  //Determines whether the list is full

  int getLength();  //Determines the number of elements in list

  ItemType getItem(ItemType item, bool& found); //Get list element whos key matches items key if present

  void putItem(ItemType item);

  void deleteItem(ItemType item);

  void resetList();

  ItemType getnextItem();

  void splitLists(ItemType item, UnsortedList& list1, UnsortedList& list2);

 private:
  int findItem(ItemType item);
};
#endif
