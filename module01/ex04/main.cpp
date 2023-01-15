#include <iostream>
#include <fstream>


//create error handlingfor fils

int main (int ac, char **av)
{
	if (ac != 4)
		return 1;

	std::string old = av[2];
	std::string newWord = av[3];

	std::string filename = av[1];
	std::ifstream file(filename); //read
	if (!file)
	{
		std::cout<<"file not found\n";
		return (-1);
	}

	std::string newfilename = filename+".replace";
	std::ofstream newFile(newfilename); //write

	if (!newFile)
	{
		file.close();
		std::cout<<"file not created\n";
		return (-1);
	}


	std::string BUFF;

	size_t pos = 0;
	size_t old_word_len = old.length();
	std::string updated;

	while(std::getline(file, BUFF))
	{
		pos = 0;
		while ((pos = BUFF.find(old, pos)) != BUFF.npos)
		{
			BUFF.erase(pos,old_word_len);
			BUFF.insert(pos,newWord);
			pos = pos + newWord.length();
		}
		newFile << BUFF;
		newFile << "\n";
	}

	file.close();
	newFile.close();

	return 0;
}

