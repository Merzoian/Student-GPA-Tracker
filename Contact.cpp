#include "Contact.h"

Contact::Contact() : email(""), phone("") {}

void Contact::input() {
    std::cin.ignore();
    std::cout << "Enter email: ";
    std::getline(std::cin, email);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone);
}

void Contact::display() const {
    std::cout << "Contact Info: Email: " << email << ", Phone: " << phone << std::endl;
}
