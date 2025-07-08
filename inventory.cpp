#include "inventory.h"
#include "paperbook.h"
#include "ebook.h"
#include "showcasebook.h"
#include  <iostream>

Inventory::~Inventory() {
    for (auto& book : books) {
        delete book;
    }
}

void Inventory::addBook(Book* book) {
    books.push_back(book);
}

void Inventory::removeOutDatedBooks(int currentYear, int maxAge){
    for (auto it = books.begin(); it != books.end();) {
        if (currentYear - (*it)->getYear()  > maxAge) {
            std::cout << "Removing outdated book: " << (*it)->getTitle() << endl;
            delete *it; 
            it = books.erase(it); 
        } else {
            ++it; 
        }
    }
}

void Inventory::buyBook(string isbn, int quantity, string email, string address) {
    double price = 0;
    bool bookFound = false;
    if (quantity <= 0) throw invalid_argument("Quantity must be greater than zero");
    for (auto i = books.begin(); i!= books.end(); i++) {
        if((*i)->getISBN() == isbn) {
            if(dynamic_cast<PaperBook*>(*i)) {
                price = (*i)->buy(quantity, email, address);
                bookFound = true;
            } else if(dynamic_cast<EBook*>(*i)) {
                price = (*i)->buy(quantity, email, address);
                bookFound = true;
            } else if(dynamic_cast<ShowcaseBook*>(*i)) {
                bookFound = true;
                throw invalid_argument("ShowcaseBook cannot be purchased");
            }
        }
    }
    if (bookFound) {
        cout << "Book purchased successfully. Total price: " << price << endl;
    }
    if(!bookFound == true ) throw std::invalid_argument("Book not found in inventory");
}