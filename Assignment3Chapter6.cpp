/*
Meghan Moore
February 14, 2015
CIT 245 - Data Structures and Programming C++
Assignment 3 - Chapter 6
Purpose: Write a class that represents a player in a game.
Write a test program that creates three players and displays them.
*/

#include <iostream> //cin, cout, cerr
#include <cstdlib> //system
using namespace std;

class GamePlayer{
    public:
      void setName(string name) {this->name = name;}
      string getName() {return name;}
      void setPassword(string password) {this->password = password;}
      string getPassword() {return password;}
      void setXP(int xp) {this->xp = xp;}
      int getXP() {return xp;}
      void setInventory(string a, string b, string c, string d);
      string *getInventory();
      void setLocation(int x, int y) {locationX = x; locationY = y;}
      int getLocationX() {return locationX;}
      int getLocationY() {return locationY;}
      void display();
    private:
      string name;
      string password;
      int xp;
      string inventory[4];
      int locationX;
      int locationY;
};

int main(){
  cout << "This program generates three player objects and displays them.\n\n";
  
  GamePlayer p1, p2, p3;
  
  //set values
  p1.setName("Nematocyst");
  p1.setPassword("obfuscator");
  p1.setXP(1098);
  p1.setInventory("sword", "shield", "food", "potion");
  p1.setLocation(55689, 76453);
  
  p2.setName("Omphaloskeps");
  p2.setPassword("obstreperous");
  p2.setXP(11456);
  p2.setInventory("sword of magic", "sheild of power", "mana potion", "anti-fire potion");
  p2.setLocation(12, 5108);
  
  p3.setName("Tokamafusion");
  p3.setPassword("toroid");
  p3.setXP(15678);
  p3.setInventory("axe of damage", "sheild of warding", "strength potion", "healing potion");
  p3.setLocation(99, 108);
  
  //print values
  p1.display();
  p2.display();
  p3.display();
  
  system("pause");
  return 0;
} //end main

void GamePlayer::setInventory(string a, string b, string c, string d){
	inventory[0] = a;
	inventory[1] = b;
	inventory[2] = c;
	inventory[3] = d;
}

string* GamePlayer::getInventory() {return inventory;}

void GamePlayer::display(){
  //print values
  string* getArray = getInventory();
  cout << "Player Info\n";
  cout << "Name:\t\t" << getName() << endl;
  cout << "Password:\t" << getPassword() << endl;
  cout << "Experience:\t" << getXP() << endl;
  cout << "Inventory:\t" << getArray[0] << "\n\t\t" << getArray[1] << "\n\t\t" << getArray[2] << "\n\t\t" << getArray[3] << endl;
  cout << "Position:\t" << getLocationX() << ", " << getLocationY() << endl << endl;
} //end GamePlayer::display
