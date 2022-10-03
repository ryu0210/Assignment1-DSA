#ifndef DESTINATIONRATING_H
#define DESTINATIONRATING_H


class DestinationRating
{
    public:
        DestinationRating();
        void SetName(string destinationName);
        void SetRating(double userRating);
        void Print();

        /// virtual ~DestinationRating();

    /// protected:

    private:
      string name;
      double rating;
};

#endif // DESTINATIONRATING_H
