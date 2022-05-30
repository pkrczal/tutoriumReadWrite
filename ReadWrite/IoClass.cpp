//
// Created by Paul Krczal on 30.05.22.
//

#include "IoClass.h"

#include <memory>
#include <utility>
#include <sstream>

void IoClass::addNewPerson(std::string firstname, std::string lastname, std::string email) {
    vPerson[insertPointer] = std::make_unique<Person>(std::move(firstname),
                                                                std::move(lastname),
                                                                std::move(email));
    insertPointer++;
}

std::istream &IoClass::read(std::istream &in) {
    int persons;
    char buff[100] = "";
    in.getline(buff, sizeof (buff));
    std::string buffer;
    std::stringstream ss(buff);
    std::getline(ss, buffer, '%');
    std::getline(ss, buffer,'\n');
    persons = std::stoi(buffer);
    for (int i = 0; i < persons; i++) {
        in.getline(buff, sizeof (buff));
        std::stringstream ss1(buff);
        std::string firstname, lastname, email;
        std::getline(ss1, firstname, '%');
        std::getline(ss1, lastname, '%');
        std::getline(ss1, email, '\n');
        addNewPerson(firstname,lastname,email);
    }
    return in;
}

std::ostream &IoClass::write(std::ostream &out) {
    out << "Anzahl Personen:%" << vPerson.size() << "\n";
    for (auto & i : vPerson) {
        if (i != nullptr)
        out << i->getFirstname() << "%" << i->getLastname() << "%" << i->getEmail() << "\n";
    }
    return out;
}
