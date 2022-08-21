#include "iostream"
#include "fstream"
#include "string"

int	printError(std::string s, std::string s2)
{
	if (s != "")
		std::cerr << "Error: " << s << std::endl;
	std::cout << s2 << std::endl;
	return (1);
}

void	check(std::string str, char	**av){
	std::ofstream	outfile;
	int				pos;
	std::string		first;
	std::string		sec;

	first = std::string(av[2]);
	sec = std::string(av[3]);
	outfile.open((std::string)av[1] + ".replace");
	for (int i = 0;i < (int)str.length(); i++){
		pos = str.find(first, i);
		if (pos != -1 && pos == i){
			outfile << sec;
			i += first.size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
}

int main(int ac, char **av)
{
	std::ifstream	infile;
	char			single;
	std::string		str;

	if (ac != 4)
		return (printError("wrong number of arguments", "./cppSed fileName stringToReplace replacement"));
	infile.open(av[1]);
	if (infile.fail()){
		return (printError(av[1], "no such file or directory"));
	}
	while (!infile.eof() && infile >> std::noskipws >> single)
		str += single;
	infile.close();
	check(str, av);
	return (0);
}