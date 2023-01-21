#include  "base.hpp"


/*
an enumeration called RandomType is defined with three enumerators: A, B, and C. These correspond to the 

classes of the same name that are also defined in the code.

The srand() function is used to seed the random number generator with the current time. This ensures that the sequence 

of random numbers generated will be 

different each time the program is run.

The rand() function is then used to generate a random number between 0 and 2 (inclusive). The result is casted to 

RandomType and stored in the variable randomType.

Next, an if-else statement is used to check the value of randomType and return a new object of the corresponding class.

The first if statement checks if the value of randomType is equal to RandomType::A. If it is, a new object of class A is returned.

The second if statement checks if the value of randomType is equal to RandomType::B. If it is, a new object of class B is returned.

Finally, the else statement executes if the value of randomType is equal to RandomType::C. A new object of class C is returned.

As you can see, this way of implementing allows you to have better readability and maintainability since it is explicit what are the 

possible values of randomType, and you won't have to worry about unexpected values.
*/

Base *generate(void)
{
    enum class RandomType
    {
        A,
        B,
        C
    };

    RandomType randomType;
    srand(time(NULL));
    randomType = static_cast<RandomType>(rand() % 3);
    if (randomType == RandomType::A)
        return new A;
    else if (randomType == RandomType::B)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    A *a;
    if ((a = dynamic_cast<A *>(p)) != NULL) 
        std::cout << "A" <<std::endl;
    B *b;
    if ((b = dynamic_cast<A *>(p)) != NULL)
        std::cout << "B" << std::endl;
    C *c;
    if ((c = dynamic_cast<C *>(p)) != NULL)
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try{
        A& a = dynamic_cast<A &> (p);
        std::cout << "A" << std::endl;
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try{
        B& b = dynamic_cast<B &> (p);
        std::cout << "B" << std::endl;
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
     try{
        C& c = dynamic_cast<C &> (p);
        std::cout << "C" << std::endl;
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

