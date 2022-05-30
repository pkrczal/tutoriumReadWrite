//
// Created by Paul Krczal on 30.05.22.
//

#include <fstream>
#include "iostream"
#include "IoClass.h"

int main() {
    IoClass c(2);
    c.addNewPerson("Max", "Mustermann", "m@mail.de");
    //c.addNewPerson("Martin", "Mustermann", "ma@mail.de");
    /*std::ofstream out;
    out.open("test.txt");
    c.write(out);*/
    std::ifstream in;
    in.open("test.txt");
    c.read(in);
}