#include <string>
#include <ostream>
#include <iostream>

struct Node
{
  std::string name;
  int age;
  Node* next;


};
using List=Node*;

bool empty(List& list);

void insert(List& list,const std::string& name,int age);

void append(List& list,const std::string& name,int age);

void print(List& list,std::ostream& out);

void print_reversed(List& list,std::ostream& out);

void clear(List& list);

List copy(List& list);

void swap(List& listA,List& listB);

void reverse(List& list);
