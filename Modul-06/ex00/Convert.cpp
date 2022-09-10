#include "Convert.hpp"

static void	convert_to_char(std::string &str)
{
	if (is_pseudo_literal(str))
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	char c = static_cast<char>(atoi(str.c_str()));
	if (c < 32 || c > 126)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << c << std::endl;
}

static void	convert_to_int(std::string &str)
{
	if (is_pseudo_literal(str))
	{
		std::cout << "Impossible" << std::endl;
		return;
	}
	std::cout << std::atoi(str.c_str()) << std::endl;
}

static void	convert_to_float(std::string &str)
{
	float number = std::strtof(str.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0f" << std::endl;
		return ;
	}
	std::cout << number << "f" << std::endl;
}

bool	is_pseudo_literal(std::string &s)
{
	return (s == "nan" || s == "nanf" || s == "+inf" || s == "inf"
		|| s == "-inf" || s == "+inff" || s == "inff" || s == "-inff");
}

static void	convert_to_double(std::string &str)
{
	double number = std::strtod(str.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0" << std::endl;
		return ;
	}
	std::cout << number << std::endl;
}

void	conversion_of_scalar_types(std::string str)
{
	std::cout << std::right << std::setw(10) <<
		 YEL << "Char : ", convert_to_char(str);
	std::cout << std::right << std::setw(10) <<
		 YEL << "Int : ", convert_to_int(str);
	std::cout << std::right << std::setw(10) <<
		 YEL << "Float : ", convert_to_float(str);
	std::cout << std::right << std::setw(10) <<
		 YEL << "Double : ", convert_to_double(str);
}