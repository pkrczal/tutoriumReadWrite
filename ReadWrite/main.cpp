//
// Created by Paul Krczal on 30.05.22.
//

#include <fstream>
#include "iostream"
#include "IoClass.h"

int main() {
    IoClass c(0);
    std::ifstream in;
    in.open("test.txt");
    c.read(in);
    c.showPersons();
}