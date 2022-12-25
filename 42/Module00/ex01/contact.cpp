#include <iostream>
#include "contact.hpp"

Contact::Contact(){
}
Contact::~Contact(){
}

void Contact::set_fname(std::string fname)
{
	this->first_name = fname;
}
void Contact::set_lname(std::string lname)
{
	this->last_name = lname;
}
void Contact::set_phone(std::string phone)
{
	this->phone_num = phone;
}
void Contact::set_insta(std::string insta)
{
	this->instagram = insta;
}
void Contact::set_secret(std::string sec)
{
	this->dark_secret = sec;
}

std::string Contact::get_fname()
{
	return (first_name);
}
std::string Contact::get_lname()
{
	return (last_name);
}
std::string Contact::get_num(){
	return (phone_num);
}
std::string Contact::get_insta(){
	return (instagram);
}
std::string Contact::get_sec(){
	return (dark_secret);
}
