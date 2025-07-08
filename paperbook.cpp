#include "paperbook.h"
#include <iostream> 
#include <stdexcept>

using namespace std;

PaperBook::PaperBook(string isbn, string title, int year, double price, int stock) 
    : Book(isbn, title, year, price), stock(stock) {
}

double PaperBook::buy(int quantity, string email, string address) {
    if (quantity > stock) {
        throw invalid_argument("Book not available in stock");
    } 
    stock -= quantity;
    ShippingService(*this, address);
    return getPrice() * quantity; 
}