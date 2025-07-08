#include "book.h"
#include <string> 

Book::Book(string isbn, string title, int year, double price):
    isbn(isbn), title(title), year(year), price(price) {}

double Book::getPrice() const {
    return price;
}    

string Book::getTitle() const {
    return title;
}

int Book::getYear() const {
    return year;
}

string Book::getISBN() const {
    return isbn;
}