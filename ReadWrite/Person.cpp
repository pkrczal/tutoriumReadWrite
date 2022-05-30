//
// Created by Paul Krczal on 30.05.22.
//

#include "Person.h"
#include "iostream"
void Person::showPerson() {
    std::cout << "Vorname: " << firstname << "\n";
    std::cout << "Nachname: " << lastname << "\n";
    std::cout << "E-Mail: " << email << "\n";
    std::cout << std::endl;
}
