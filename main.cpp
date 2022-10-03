#include <iostream>

using namespace std;

#include "DestinationRating.h"

int main()
{
    DestinationRating DestinationReview;

    string d1, d2, d3, d4, d5; /// Declare five destination strings
    double r1, r2, r3, r4, r5; /// Declare five rating integers

    cout << "Welcome, please review the five destinations  \n\n" <<endl;

    cout << "Where was the first destination? ";
    cin >> d1;

    cout << "Where was the second destination? ";
    cin >> d2;

    cout << "Where was the third destination? ";
    cin >> d3;

    cout << "Where was the fourth destination? ";
    cin >> d4;

    cout << "Where was the fifth destination? ";
    cin >> d5;

    cout << "--------------------------------" << endl;

    cout << "What is the star rating for " << d1 << "? ";
    cin >> r1;

    cout << "What is the star rating for " << d2 << "? ";
    cin >> r2;

    cout << "What is the star rating for " << d3 << "? ";
    cin >> r3;

    cout << "What is the star rating for " << d4 << "? ";
    cin >> r4;

    cout << "What is the star rating for " << d5 << "? ";
    cin >> r5;

    cout << "------------Results------------" << endl;

    /// Destination 1
    DestinationReview.SetName(d1);
    DestinationReview.SetRating(r1);
    DestinationReview.Print();

    /// Destination 2
    DestinationReview.SetName(d2);
    DestinationReview.SetRating(r2);
    DestinationReview.Print();

    /// Destination 3
    DestinationReview.SetName(d3);
    DestinationReview.SetRating(r3);
    DestinationReview.Print();

    /// Destination 4
    DestinationReview.SetName(d4);
    DestinationReview.SetRating(r4);
    DestinationReview.Print();

    /// Destination 5
    DestinationReview.SetName(d5);
    DestinationReview.SetRating(r5);
    DestinationReview.Print();

    cout << "\nThank you for the rating!" << endl;
    return 0;
}
