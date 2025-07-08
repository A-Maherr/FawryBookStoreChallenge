#include "showcasebook.h"
#include <iostream>
#include <stdexcept>

using namespace std;

ShowcaseBook::ShowcaseBook(string isbn, string title, int year) 
    : Book(isbn, title, year, 0.0) {}
 
double ShowcaseBook::buy(int quantity, string email, string address) {
    throw invalid_argument("ShowcaseBook cannot be purchased");
}