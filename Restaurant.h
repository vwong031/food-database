#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <string>
using namespace std;

class Restaurant {
  private:
    string name;
    int rating;
    string cuisine;
    string review;
  public:
    const string getName();
    const int getRating();
    const string getCuisine();
    const string getReview();

    void InsertName();
    void InsertRating();
    void InsertCuisine();
    void WriteReview();
    void CheckRating(int);
};

#endif
