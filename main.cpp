#include <iostream>
#include <cstring>
#include <vector>
#include <map>

#include "Room.h"

using namespace std;

int cmd (char input[80]);
void display(Room* &room);

int main () {
  // intro
  cout << "Zuul!" << endl;
  cout << "You are stuck in Mr. Galbraith's secret lair!" << endl;
  cout << "Collect all the items and escape secretly from the business office." << endl;
  cout << "(The main office has too many watchful eyes.)" << endl;
  cout << "Good luck!" << endl;

  // rooms, exits, and items
  Room* lair = new Room("Galbraith's secret lair. Robots are whirring. Computers are chirping. Get out while you can.");
  Room* lab = new Room ("the computer lab. The sea of computers is daunting.");
  lab->setItem("COMPUTER");
  Room* one = new Room("one hall. It's very crowded - flying backpack incoming!");
  Room* math = new Room ("some math classroom. All the nerds are here. They want you to join their calculus club.");
  math->setItem("CALCULATOR");
  Room* lower = new Room ("the lower commons. The cheer team will use this space for practice soon.");
  Room* upper = new Room("the upper commons. It smells like pizza here.");
  Room* two = new Room("two hall. Nothing exciting here. I guess the wall art is cool.");
  Room* auditorium = new Room("the auditorium. It's dark. The curtains are drawn. Are you supposed to be here?");
  auditorium->setItem("COSTUME");
  Room* gym = new Room("the gym. The AC here is terrible, and it smells like decaying socks.");
  gym->setItem("BARBELL");
  Room* main = new Room("main hall. The exits here are a little weird.");
  Room* awing = new Room("A-wing. Keep your voice down, everyone's studying.");
  awing->setItem("PENCIL");
  Room* leadership = new Room("the leadership room. Who knows what's even in here?");
  Room* community = new Room("the community room. Is that the main office nearby?");
  Room* office = new Room("the main office. RUN!!!");
  Room* business = new Room("the business office. Congrats on making it here!");

  lair->setExit(1, lab);
  lab->setExit(3, lair);
  lab->setExit(0, one);
  one->setExit(0, lower);
  one->setExit(1, main);
  one->setExit(2, lab);
  one->setExit(3, math);
  math->setExit(1, one);
  lower->setExit(0, two);
  lower->setExit(1, gym);
  lower->setExit(2, one);
  lower->setExit(3, upper);
  upper->setExit(1, lower);
  two->setExit(1, auditorium);
  two->setExit(2, lower);
  auditorium->setExit(3, two);
  gym->setExit(3, lower);
  main->setExit(0, awing);
  main->setExit(1, leadership);
  main->setExit(2, community);
  main->setExit(3, one);
  awing->setExit(3, main);
  leadership->setExit(0, main);
  leadership->setExit(3, community);
  community->setExit(0, main);
  community->setExit(1, leadership);
  community->setExit(2, office);
  office->setExit(0, community);
  office->setExit(1, business);
  business->setExit(3, office);

  // variables
  Room* current = lair;
  display(current);
















  
  return 0;
}

int cmd (char input[80]) {
  if (strcmp(input, "NORTH") == 0) {
    return 0;
  }
  if (strcmp(input, "EAST") == 0) {
    return 1;
  }
  if (strcmp(input, "SOUTH") == 0) {
    return 2;
  }
  if (strcmp(input, "WEST") == 0) {
    return 3;
  }
  return -1;
}

void display (Room &room) {
  cout << "You are in ";
  room.getDescription();
  cout << endl << "There are exits: ";
  room.showExits();
  cout << endl << "There are items: ";
  room.showItems();
  cout << endl;
}

  
