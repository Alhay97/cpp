#include <iostream>
#include "phonebook.hpp"

void Phonebook::infinte_getline()
{
    std::string ab;
    int i = 0;
    while (1)
    {
        getline(std::cin, ab);
        if (ab == "EXIT")
            break;
        else if (ab == "ADD")
        {
            std::string tmp = "";
            getline(std::cin, tmp);
            person[i].set_fname(tmp);
            getline(std::cin, tmp);
            person[i].set_lname(tmp);
            getline(std::cin, tmp);
            person[i].set_phone(tmp);
            getline(std::cin, tmp);
            person[i].set_insta(tmp);
            getline(std::cin, tmp);
            person[i].set_secret(tmp);
            i++;
        }
        else if (ab == "SEARCH")
        {

        }
    }
}

void print_table(void)
{
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|index     |first name|last name |insta     |" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;

}

void 

int main()
{
}
