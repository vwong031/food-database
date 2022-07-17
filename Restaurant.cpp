#include "Restaurant.h"



const string Restaurant::getName() {
  return name;
}

const int Restaurant::getRating() {
  return rating;
}

const string Restaurant::getCuisine() {
  return cuisine;
}

const string Restaurant::getReview() {
  return review;
}

void Restaurant::InsertName() {
  string restaurantName;

  cout << "Enter the restaurant name: ";
  getline(cin, restaurantName);

  name = restaurantName;
}

void Restaurant::InsertRating() {
  int restaurantRating;

  cout << "Enter restaurant rating (out of 5 stars): ";
  cin >> restaurantRating;

  CheckRating(restaurantRating);
}

void Restaurant::CheckRating(int restaurantRating) {
  bool isValid = true;

  if (restaurantRating < 1 || restaurantRating > 5) {
    isValid = false;
  }

  if (!isValid) {
    cout << "Invalid rating. Input a different rating." << endl << endl;
    InsertRating();
  }
}

void Restaurant::InsertCuisine() {
  string restaurantCuisine;

  cout << "Enter the restaurant cuisine: ";
  cin >> restaurantCuisine;   // Add feature of entering multiple cuisines?

  cuisine = restaurantCuisine;
}

void Restaurant::WriteReview() {
  string restaurantReview;

  cout << "Enter a review: ";
  getline(cin, restaurantReview);

  review = restaurantReview;
}
