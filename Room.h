#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

class Room {
 public:
  Room();
  Room(char*);
  char* getDescription();
  void setExit(int, Room*);
  void showExits();
  Room* getExit(int);
  void setItem(char*);
  void showItems();
  void getItem(char*);

 private:
  char* description;
  map<int, Room*> exits;
  vector<char*> items;
};

#endif
