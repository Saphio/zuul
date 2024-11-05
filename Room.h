#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <cstring>

using namespace std;

class Room {
 public:
  Room();
  Room(char*, char*);
  char* getName;
  char* getDescription;

 private:
  char* name;
  char* description;
};

#endif
