#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
	if (ac != 4)
		return 1;

	std::string old = av[2];
	std::string newWord = av[3];

	std::string filename = av[1];
	std::ifstream file(filename);

	std::string newfilename = filename+".replace";
	std::ofstream newFile(newfilename);
	std::string red;

	size_t pos = 0;
	size_t old_word_len = old.length();
	std::string updated;

	while(std::getline(file, red))
	{
		std::cout << red << std::endl;
		std::cout << "check: " << ((pos = red.find(old, pos)) != std::string::npos) << std::endl;
		while ((pos = red.find(old, pos)) != std::string::npos) {
			updated.append(red, pos, old_word_len);
			updated.append(newWord);
			pos += old_word_len;
		}
		if (pos != std::string::npos)
			updated.append(red, pos, std::string::npos);
		newFile << updated;
	}

	return 0;
	// std::ifstream openNew(newfilename);

	// while (std::getline(openNew, red))
	// 	std::cout << red << std::endl;
}

