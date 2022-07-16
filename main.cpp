#include <iostream>
using namespace std;

#include "Restaurant.h"

void printMenu();

int main() {
  cout << "Hi. Welcome to the Restaurant Database! Please choose an option from the menu" << endl;

  printMenu();

  return 0;
}

void printMenu() {
  int userChoice;
  Restaurant data;

  cout << "OPTIONS:" << endl;
  cout << "0 - Enter restaurant name" << endl
    << "1 - Enter rating" << endl
    << "2 - Enter cuisine" << endl
    << "3 - Write a review" << endl << endl
    << "Choose an option: ";

  cin >> userChoice;
  cin.ignore();

  if (userChoice == 0) {
    cout << "ENTERING RESTAURANT NAME" << endl;
    data.InsertName();
  }
  else if (userChoice == 1) {
    cout << "ENTERING RATING" << endl;
  }
  else if (userChoice == 2) {
    cout << "ENTERING CUISINE" << endl;
  }
  else if (userChoice == 3) {
    cout << "ENTERING REVIEW" << endl;
  }
  else {
    cout << "Invalid input. Choose another option." << endl << endl;
  }
    
}
