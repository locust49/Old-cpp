#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	std::string		filename;
	std::string		buff;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (-1);
	}
	filename = argv[1];

	std::ifstream	ifs;
	ifs.open(filename);
	if (!ifs.is_open())
	{
		std::cout << "Can't open the input file !" << std::endl;
		return (-1);
	}
		std::ofstream	ofs;
		ofs.open(filename + ".replace");
		if (!ofs.is_open())
		{
			std::cout << "Can't modify the output file !" << std::endl;
			return (-1);
		}
		s1 = argv[2];
		s2 = argv[3];
		while (std::getline(ifs, buff))
		{
			unsigned long		index = 0;
			unsigned long		tracker = 0;
		
			while (index < buff.length())
			{
				index = buff.find(s1, index + tracker + 1);
				if (index == std::string::npos)
				{
					while (tracker < buff.length())
						ofs << buff[tracker++];
					break ;
				}
				while (tracker < index)
					ofs << buff[tracker++];
				ofs << s2;
				tracker += s1.length();
			}
			ofs << std::endl;
		}
		ofs.close();
		ifs.close();
	return (0);
}
