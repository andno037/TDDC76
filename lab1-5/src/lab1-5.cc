/*
 * lab1-5.cc
 */
// Inkluderingar efter behov

// Deklarera en funktion build_lists(instr�m, list_1, list_2) som l�ser namn 
// fr�n instr�mmen och anv�nder insert() f�r att s�tta in i list_1 och append()
// f�r att s�tta in i list_2. build_lists() ska definieras efter main().

// Komplettera och modifiera:
#include <iostream>
#include <ostream>
#include <clocale>
#include <fstream>
#include "List.h"

using namespace std;





int main(int argc,char *argv[])
{
  // Kontrollera att ett argument (filnamn) angivits p� kommandoraden.
  // Om inte skriv ut ett felmeddelande och avsluta programmet.

  if(argc !=2)
    {
      cout << "du fel"<<endl;
      return -1;
    } 
    
  ifstream the_file;
  the_file.open(argv[1]);
  if(! the_file.is_open())
    {
      cout <<"ingen fill"<< endl;
      return -1;
    }

    
  
  List list_1{nullptr},list_2{nullptr};
  string name;
  int age;

 
      
  while(the_file >> name && the_file >> age)
    {
      insert(list_1,name,age);
    }
  

  // �ppna en infilstr�m f�r den fil vars namn givits p� kommandoraden. 
  // Kontrollera att �ppningen lyckas, om inte ska ett felmeddelande 
  // skrivas ut och programmet avslutas.

  // Deklarera tv� tomma listor, list_1 och list_2

  // Kontrollera med empty() att listorna �r tomma och skriv ut det.

  // Anropa build_lists() f�r att l�sa namn fr�n indata och s�tta in i namnen
  // i list_1 och list_2, enligt vad som sagts om build_lists() ovan.

  


  cout << "Lista 1 efter inl�sning av namn:\n";
  print(list_1,cout);
  // Skriv ut list_1 med print()
  cout << "Lista 2 efter inl�sning av namn:\n";
  // Skriv ut list_2 med print()
  print(list_2,cout);
  cout << "Lista 1 utskriven i omv�nd ordning:\n";
  // Skriv ut list_1 med print_reversed()
  print_reversed(list_1,cout);
  cout << "Lista 1 v�nds.\n";
  // V�nd inneh�llet i list_1 med reverse();
  reverse(list_1);
  cout << "Lista 1 efter v�ndning:\n";
  // Skriv ut list_1 med print()
  print(list_1,cout);
  cout << "Lista 2 raderas.\n";
  // Radera list_2 med clear()
  clear(list_2);

  if (empty(list_2))
    cout << "Lista 2 �r tom.\n";
  else
    cout << "Lista 2 �r inte tom.\n";

  cout << "Lista 2 tilldelas en kopia av lista 1.\n";
  // Anv�nd copy() f�r att kopiera list_1
  list_2=copy(list_1);
  cout << "Lista 2 inneh�ller:\n";
  // Skriv ut list_2 med print()
  print(list_1,cout);
  cout << "Lista 2 raderas.\n";
  // Radera list_2 med clear()
  clear(list_2);
  cout << "Lista 1 och 2 byter inneh�ller.\n";
  // Anv�nd swap()
  swap(list_1,list_2);
  if (empty(list_1))
    cout << "Lista 1 �r tom.\n";
  else
    cout << "Lista 1 �r inte tom.\n";
  cout << "Lista 2 inneh�ller:\n";
  // Skriv ut list_2 med print()
  print(list_2,cout);
  cout << "Lista 2 raderas.\n";
  // Radera list_2 med clear()
  clear(list_2);

  
  // Kontrollera med empty() att listorna �r tomma och skriv ut det.

  cout << "Programmet avslutas.\n";

  return 0;
}
