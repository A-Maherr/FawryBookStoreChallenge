#ifndef EBOOK_H
#define EBOOK_H

#include "book.h"
#include "Services.h"

class EBook : public Book {
    private:
        string fileType;
    public: 
        EBook(string i, string t, int y, double p, string f);

        double buy(int quantity, string email, string address);
};

#endif