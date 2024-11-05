#include <iostream>
#include <cstring>
#include "Room.h"

using namespace std;

Room::Room() {
  name = new char[80];
  description = new char[80];
}

Room::Room(char* n, char* d) {
  name = new char[80];
  description = new char[80];

  strcpy(name, n);
  strcpy(description, d);
}
