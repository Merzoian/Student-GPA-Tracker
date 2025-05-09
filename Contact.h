#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {
private:
    std::string email;
    std::string phone;

public:
    Contact(); // default constructor

    void input();   // ask user for contact info
    void display() const; // show contact info
};

#endif
