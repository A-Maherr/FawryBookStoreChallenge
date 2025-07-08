#pragma once
#include <string>
#include <iostream>
using namespace std;

class PaperBook;
class EBook;

void ShippingService(const PaperBook& book, const string& address);
void MailService(const EBook& book, const string& email);
