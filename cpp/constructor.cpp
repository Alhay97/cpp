#include <iostream>

class Student
{
    public:
        std::string full_name;
        std::string school;
        int    age;

    Student(std::string name, std::string sc, int age1)
    {
        full_name = name;
        school = sc;
        age = age1;
    }

    void introduction();

};

void Student::introduction()
{
    std::cout << "Name: " << full_name << std::endl;
    std::cout << "School: " << school << std::endl;
    std::cout << "Age:" << age << std::endl;
}

int main()
{
    Student studen1("alhai","42 AD",25);
    studen1.introduction();
}