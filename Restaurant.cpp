#include "Restaurant.h"

void Restaurant::InsertName() {
  string restaurantName;

  cout << "Enter the restaurant name: ";
  getline(cin, restaurantName);

  name = restaurantName;
  cout << "Restaurant Name: " << name << endl;
}

// void Restaurant::InsertRating() {
  
// }
