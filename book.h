#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book {
    private:
        string isbn;
        string title;
        int year;
        double price;
    public:
        Book(string isbn, string title, int year, double price);

        double getPrice() const;

        string getTitle() const;

        int getYear() const;

        string getISBN() const;

        virtual double buy(int quantity, string email, string address) = 0; 
};

#endif