#ifndef SHOWCASEBOOK_H
#define SHOWCASEBOOK_H

#include "book.h"

class ShowcaseBook : public Book {
    public:
        ShowcaseBook(string isbn, string title, int year);
        double buy(int quantity, string email, string address) override;
};

#endif