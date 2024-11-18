#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include "Room.h"

using namespace std;

Room::Room() {
  description = new char[80];
}

Room::Room(char* d) {
  description = new char[160];
  strcpy(description, d);
}

char* Room::getDescription() {
  return description;
}

void Room::setExit(int d, Room* room) {
  exits[d] = room;
  return;
}

void Room::showExits() {
  for (map<int, Room*>::iterator it = exits.begin(); it != exits.end(); it++) {
    if (it->first == 0) cout << "NORTH ";
    else if (it->first == 1) cout << "EAST ";
    else if (it->first == 2) cout << "SOUTH ";
    else if (it->first == 3) cout << "WEST ";
  }
  return;
}

Room* Room::getExit(int d) {
  return exits[d];
}

void Room::setItem(char* item) {
  items.push_back(item);
  return;
}

void Room::showItems () {
  for (char* item : items) {
    cout << item << " ";
  }
  return;
}

void Room::getItem(char* item) {
  for (vector<char*>::iterator it = items.begin(); it != items.end(); it++) {
    if (strcmp((*it), item) == 0) {
      items.erase(it);
      break;
    }
  }
  return;
}
    
