//
// Created by Paul Krczal on 30.05.22.
//

#ifndef TUTORIUMREADWRITE_PERSON_H
#define TUTORIUMREADWRITE_PERSON_H
#pragma once
#include <utility>

#include "string"

class Person {

public:
    explicit Person(std::string firstname, std::string lastname, std::string email) :
    firstname(std::move(firstname)),
    lastname(std::move(lastname)),
    email(std::move(email)){

    }

    virtual ~Person() = default;

    Person() = default;

    Person(Person &p1) : firstname(p1.firstname), lastname(p1.lastname), email(p1.email) {}

    std::string getFirstname() { return this->firstname; }

    std::string getLastname() { return this->lastname; }

    std::string getEmail() { return this->email; }

private:
    std::string firstname;
    std::string lastname;
    std::string email;

};


#endif //TUTORIUMREADWRITE_PERSON_H
