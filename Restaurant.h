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
    void InsertName();
    void InsertRating();
    void InsertCuisine();
    void WriteReview();
};

#endif
