#include "inventory.h"
#include "paperbook.h"
#include "ebook.h"
#include "showcasebook.h"
#include <iostream>

int main() {
    /*
    Book Entry Formats:
    1. PaperBook: ISBN, Title, Year, Price, Stock
    2. EBook: ISBN, Title, Year, Price, FileType
    3. ShowcaseBook: ISBN, Title, Year

    Buying Book Format:
    buyBook(ISBN, Quantity, Email, Address)
    */

    Inventory inv;
    inv.addBook(new PaperBook("1", "C++ Programming", 2020, 29.99, 0));
    inv.addBook(new PaperBook("2", "C Programming", 2012, 50.99, 5));
    inv.addBook(new EBook("3", "Learning Python", 2021, 19.99, "PDF"));
    inv.addBook(new ShowcaseBook("4", "JavaScript Essentials", 2022));

    // Example of buying a PaperBook that is out of stock or trying to buy too many copies
    try {
        inv.buyBook("1", 2, "my@email.com", "123 Main St");
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    cout << "----------------------------------" << endl;
    try {
        inv.buyBook("2", 20, "my@email.com", "123 Main St");
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    cout << "----------------------------------" << endl;

    // Example of attempting to buy a showcase book
    try {
    inv.buyBook("4", 1, "my@email.com", "123 Main St");
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    cout << "----------------------------------" << endl;
    // Example of buying an EBook
    inv.buyBook("3", 1, "my@email.com", "123 Main St");

    cout << "----------------------------------" << endl;
    // Example of buying a book that does not exist in the inventory
    try {
        inv.buyBook("5", 1, "my@email.com", "123 Main St");
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;  
    }
    cout << "----------------------------------" << endl;
    
    // Example of buying a paper book that is in stock
    inv.buyBook("2", 1, "my@email.com", "123 Main St");

    cout << "----------------------------------" << endl;
    // Example of removing outdated books
    inv.removeOutDatedBooks(2025, 3); // removing books older than 3 years

    return 0; 
}
