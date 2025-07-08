#ifndef INVENTORY_H
#define INVENTORY_H

#include "book.h"
#include <vector>
#include <string>

class Inventory {
    private:
        std::vector<Book*> books;
    public:
        ~Inventory();
        void addBook(Book* book);
        void removeOutDatedBooks(int currentYear, int maxAge);
        void buyBook(string isbn, int quantity, string email, string address);

};

#endif


