#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
	if (ac != 4)
		return 1;

	std::string old = av[2];
	std::string newWord = av[3];

	std::string filename = av[1];
	std::ifstream file(filename); //read

	std::string newfilename = filename+".replace";
	std::ofstream newFile(newfilename); //write
	std::string BUFF;

	size_t pos = 0;
	size_t old_word_len = old.length();
	std::string updated;

	while(std::getline(file, BUFF))
	{
		while ((pos = BUFF.find(old)) != BUFF.npos)
		{

			BUFF.erase(pos,old_word_len);
			BUFF.insert(pos,newWord);
		}
		newFile << BUFF;
		newFile << "\n";
	}

	file.close();
	newFile.close();

	return 0;
}

