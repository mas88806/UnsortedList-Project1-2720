/*
UnsortedList.cpp
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
#include "UnsortedList.h"

using std::cout;
using std::endl;

template<class ItemType>UnsortedList<ItemType> ::UnsortedList()
  :MAX_ITEMS(50){
  length = 0;
  curpos = -1;
  info = new ItemType[MAX_ITEMS];
}

template<class ItemType>UnsortedList<ItemType>::UnsortedList(int n)
  :MAX_ITEMS(n){
  length = 0;
  curpos = -1;
  info = new ItemType[n];
}

template <class ItemType> UnsortedList<ItemType>::~UnsortedList(){
  delete [] info;
}

template<class ItemType> void UnsortedList<ItemType>::makeEmpty(){
  while(length > 0){
    deleteItem(info[length]);
  }
  curpos = -1;
}

template<class ItemType> bool UnsortedList<ItemType>::isFull(){
  if (length = MAX_ITEMS){
    return true;
  }
}

template<class ItemType> int UnsortedList<ItemType>::getLength(){
  return length;
}

template<class ItemType> ItemType UnsortedList<ItemType>::getItem(ItemType item, bool& found){
  bool moreToSearch;
  int location = 0;
  found = false;
  moreToSearch = (location < length);
  while (moreToSearch && !found){
    if (item==(info[location])){
      found = true;
      item = info[location];
    }else{
	location++;
	moreToSearch = (location < length);
      }
  return item;
  }}

template<class ItemType> void UnsortedList<ItemType>::putItem(ItemType item)
{
    length++;
    info[length-1] = item;
}

template<class ItemType> void UnsortedList<ItemType>::deleteItem(ItemType item){
  int index = findItem(item);
  if (index == -1)
    cout << "Item is not in the list\n";
  else{
    info[index] = info[length-1];
    length--;
  }
}

template<class ItemType> void UnsortedList<ItemType>::resetList(){
  curpos = -1;
}

template<class ItemType> ItemType UnsortedList<ItemType>::getnextItem(){
  if (curpos == length)
    {
      cout << "There is not a next item\n";
    }
  else
    {
      curpos = curpos + 1;
      return info[curpos];
    }
}

template<class ItemType> void UnsortedList<ItemType>::splitLists(ItemType item, UnsortedList& list1, UnsortedList& list2){
  if (length<=0){
    cout << "splitList::list is empty" << endl;
  }
  else {
    resetList();
    list1.makeEmpty();
    list2.makeEmpty();
    for(int i = 0; i < length; i++){
      ItemType x = getnextItem();
      if (x <= item){
	list1.putItem(x);
      }
      else{
	list2.putItem(x);
      }
    }
  }
}

template<class ItemType> int UnsortedList<ItemType>::findItem(ItemType item){
  for(int i = 0; i <=length; i++){
    if(item == info[i]){
      return i;
    }
  }
  return -1;
}
