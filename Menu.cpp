#include "Menu.h"
#include "Restaurant.h"

void Menu::setUserChoice(int choice) {
  cout << "In setUserChoice()" << endl;
  userChoice = choice;
  cout << userChoice << endl;
}

int Menu::getUserChoice() {
  return userChoice;
}

void Menu::PrintMenu() {
  int choice;

  cout << "choice: "  << choice << endl;
  setUserChoice(choice);
  // Restaurant *data;
  // int choice;

  // cout << "OPTIONS:" << endl;
  // cout << "0 - Enter restaurant name" << endl
  //   << "1 - Enter rating" << endl
  //   << "2 - Enter cuisine" << endl
  //   << "3 - Write a review" << endl
  //   << "4 - Quit" << endl << endl
  //   << "Choose an option: ";

  // cin >> choice;
  // cin.ignore();
  // setUserChoice(choice);

  // if (getUserChoice() == 0) {
  //   cout << "ENTERING RESTAURANT NAME" << endl;
  //   data->InsertName();
  //   cout << "Restaurant Name Entered: " << data->getName() << endl;
  // }
  // else if (getUserChoice() == 1) {
  //   cout << "ENTERING RATING" << endl;
  //   data->InsertRating();
  //   cout << "Rating Entered: " << data->getRating() << endl;
  // }
  // else if (getUserChoice() == 2) {
  //   cout << "ENTERING CUISINE" << endl;
  //   data->InsertCuisine();
  //   cout << "Cuisine Entered: " << data->getCuisine() << endl;
  // }
  // else if (getUserChoice() == 3) {
  //   cout << "ENTERING REVIEW" << endl;
  //   data->WriteReview();
  //   cout << "Review Entered: " << data->getReview() << endl;
  // }
  // else if (getUserChoice() == 4) {
  //   return;
  // }
  // else {
  //   cout << "Invalid input. Choose another option." << endl << endl;
  //   PrintMenu();
  // }
}
