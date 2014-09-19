#include "Node.h"
bool empty(List& list)
{
  return list==nullptr;
}

void append(List& list,const std::string& name,int age )
{
  
  if(empty(list))
    {
      list=new Node{name,age};
    }else
    {      
      List head=list;
      while(list->next!=nullptr)
	{
	  list=list->next;
	}
      list->next=new Node{name,age};
      list=head;
    }
}

void insert(List& list,const std::string& name,int age )
{
  if(empty(list))
    {
      list=new Node{name,age};
    }else
    {      
      list=new Node{name,age,list};
    }
}










void print(List& list,std::ostream& out)
{
  List it=list;
  while(!empty(it))
    {
      out << it->name << " " << "("<< it->age<< ")"<<std::endl;
      it = it->next;
    }

}


void print_reversed(List& list,std::ostream& out)
{
  if(empty(list))
    {
      return;
    }else
    {
      print_reversed(list->next,out);
      out << list->name << " " << "("<< list->age<< ")"<<std::endl;
    }
}

void clear(List& list)
{
  List prev;
  
  while(list != nullptr)
    {
      prev=list;
      list=list->next;
      delete prev;
      
    }
}


void reverse(List& list)
{
  List prev=nullptr;
  List next=list;
  
  while(list->next != nullptr)
    {
      list=list->next;
      next->next=prev;
      prev=next;
      next=list;  
    }
  list->next=prev;
}


List copy(List& list)
{
  
  if(empty(list))
    {
      return nullptr;
    }else
    {
      return new Node{list->name,list->age,copy(list->next)};
    }
}

void swap(List& listA,List& listB)
{
  List tmp=listA;
  // listA=new Node{listB->name,listB->age,listB->next};
  // listB=new Node{tmp->name,tmp->age,tmp->next};
  listA=listB;
  listB=tmp;
}

