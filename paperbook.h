#ifndef PAPERBOOK_H
#define PAPERBOOK_H

#include "book.h"
#include "Services.h"

class PaperBook : public Book {
    private:
        int stock;
    public:
        PaperBook(string isbn, string title, int year, double price, int stock);
        
        double buy(int quantity, string email, string address) override;
};

#endif