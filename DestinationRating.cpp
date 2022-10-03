#include <iostream>

using namespace std;

#include "DestinationRating.h"

DestinationRating::DestinationRating()
{
    name = "NoName";  /// Default name: "NoName" indicates name was not set
    rating = -1;      /// Default rating: -1 indicates rating was not set
}

void DestinationRating::SetName(string destinationName) {
    name = destinationName;
}

void DestinationRating::SetRating(double userRating) {
   rating = userRating;
}

/// Prints name and rating on one line
void DestinationRating::Print() {
   cout << name << "'s rating: " << rating << " stars." << endl;
}
