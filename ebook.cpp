#include "ebook.h"
#include "book.h"

EBook::EBook(string i, string t, int y, double p, string f)
    : Book(i, t, y, p), fileType(f) {}

double EBook::buy(int quantity, string email, string address) {
    MailService(*this, email);
    return getPrice() * quantity;
}

