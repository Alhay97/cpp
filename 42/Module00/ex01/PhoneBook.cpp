#include <iostream>

class PhoneBook
{
	private:
		char *first_name;
		char *last_name;
		char *nickname;
		char *phonenumber;
		char *darkest_secret;

	public:
		void set_first_name(char *fn)
		{
			*first_name = *fn;
		}
		void set_last_name(char *ln)
		{
			*last_name = *ln;
		}
		void set_nickname(char *nn)
		{
			*nickname = *nn;
		}
		void set_phonenumber(char *phone_n)
		{
			*PhoneBook = *phone_n;
		}
		void set_darkest_secret(char *secret)
		{
			*darkest_secret = *secret;
		}
		void get_first_name()
		{
			return *first_name;
		}
		void get_last_name()
		{
			return *last_name;
		}
		void get_nickname()
		{
			return *nickname;
		}
		void get_phonenumber()
		{
			return *PhoneBook
		}
		void get_darkest_secret()
		{
			return *darkest_secret;
		}

}
