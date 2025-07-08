#include "Services.h"
#include "paperbook.h"
#include "ebook.h"


void ShippingService(const PaperBook& book, const string& address) {
    std::cout << "Shipping book '" << book.getTitle() 
              << "' to address: " << address << std::endl;
}

void MailService(const EBook& book, const string& email) {
    cout << "Sending eBook '" << book.getTitle() 
              << "' to email: " << email << endl;
}