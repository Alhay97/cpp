#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	phone_num;
		std::string	instagram;
		std::string	dark_secret;
	public:
		Contact();
		~Contact();

		//setters
		void set_fname(std::string fname);
		void set_lname(std::string lname);
		void set_phone(std::string phone);
		void set_insta(std::string insta);
		void set_secret(std::string sec);

		//getters

		std::string get_fname();
		std::string get_lname();
		std::string get_num();
		std::string get_insta();
		std::string get_sec();


};
