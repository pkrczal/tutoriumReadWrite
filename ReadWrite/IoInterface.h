//
// Created by Paul Krczal on 30.05.22.
//

#ifndef TUTORIUMREADWRITE_IOINTERFACE_H
#define TUTORIUMREADWRITE_IOINTERFACE_H
#pragma once
#include "iostream"

class IoInterface {

public:
    virtual std::istream & read(std::istream & in) = 0;
    virtual std::ostream & write(std::ostream & out)  = 0;
};


#endif //TUTORIUMREADWRITE_IOINTERFACE_H
