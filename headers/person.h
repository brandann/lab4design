#ifndef PERSON_H
#define PERSON_H

#include "HashableItem.h"

using namespace std;

class Person : public HashableItem {
public:
  Person(string name, int id);
  string getName();
  int getId();
private:
  string name;
  int id;
};

#endif
