#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(){
}
Phonebook::~Phonebook(){
}

void Phonebook::set_fname(std::string fname)
{
	this->first_name = fname;
}
void Phonebook::set_lname(std::string lname)
{
	this->last_name = lname;
}
void Phonebook::set_phone(std::string phone)
{
	this->phone_num = phone;
}
void Phonebook::set_insta(std::string insta)
{
	this->instagram = insta;
}
void Phonebook::set_secret(std::string sec)
{
	this->dark_secret = sec;
}

std::string Phonebook::get_fname()
{
	return (first_name);
}
std::string Phonebook::get_lname()
{
	return (last_name);
}
std::string Phonebook::get_num(){
	return (phone_num);
}
std::string Phonebook::get_insta(){
	return (instagram);
}
std::string Phonebook::get_sec(){
	return (dark_secret);
}
