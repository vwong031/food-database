#include <iostream>
#include <string>
using namespace std;

#include "Restaurant.h"
#include "Menu.h"


int main() {
  Menu *m;

  cout << "Hi. Welcome to the Restaurant Database! Please choose an option from the menu" << endl;

  m->PrintMenu();

  return 0;
}

