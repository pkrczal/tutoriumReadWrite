//
// Created by Paul Krczal on 30.05.22.
//

#ifndef TUTORIUMREADWRITE_IOCLASS_H
#define TUTORIUMREADWRITE_IOCLASS_H
#pragma once

#include "Person.h"
#include "vector"
#include "string"
#include "IoInterface.h"

class IoClass : IoInterface {

public:

    IoClass(int size) : vPerson(size) {}

    IoClass() = default;

    virtual ~IoClass() = default;

    void addNewPerson(std::string firstname, std::string lastname, std::string email);

    void showPersons();

    std::istream & read(std::istream & in) override;

    std::ostream & write(std::ostream & out) override;

private:
    std::vector<std::unique_ptr<Person>> vPerson;
    int insertPointer = 0;
};


#endif //TUTORIUMREADWRITE_IOCLASS_H
