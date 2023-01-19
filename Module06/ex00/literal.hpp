#ifndef LITERAL_HPP
#define LITERAL_HPP

#include "iostream"
#include <cmath>
#include <cstring>
#include <limits>
#include <exception>

class Literals
{
    private:
        std::string storage;
        char *arg;
        char chare;
        int num_int;
        float num_float;
        double num_double;

    public:
        Literals();
        Literals(char *store);
        Literals(Literals &copy);
        Literals &operator=(Literals &source);
        ~Literals();

        void converter();
        void printToChar();
        void printToInt();
        void printToFloat();
        void printToDouble();
        void printter();
};

#endif