#ifndef LITERAL_HPP
#define LITERAL_HPP

#include "iostream"

class Literals
{
    private:
        std::string storage;
        char chare;
        char *arg;
        int num_int;
        double num_double;
        float num_float;

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
};

#endif