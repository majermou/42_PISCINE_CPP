/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@students.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:17:07 by majermou          #+#    #+#             */
/*   Updated: 2021/06/29 13:37:16 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <cfloat>
#include <iomanip>
#include <iostream>

bool	compare(char *str0, const char *str1)
{
	int		i = 0;

	while (str0[i] || str1[i])
	{
		if (str0[i] != str1[i])
			return false;
		i++;
	}
	return true;
}

bool	CheckTypeChar(char *str)
{
	if (!str[1] && (str[0] < '0' || str[0] > '9'))
		return true;
	else
		return false;
}

bool	CheckTypeInt(char *str)
{
	int		i = 0;

	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
		i++;
	}
	return true;
}

bool	CheckTypeFloat(char *str)
{
	int		i = 0;
	bool	decimalPpoint = false;

	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && (str[i] != '.'  || (str[i] == '.' && decimalPpoint)))
			break;
		if (str[i] == '.')
			decimalPpoint = true;
		i++;
	}
	if (str[i] == 'f' && !str[i + 1])
		return true;
	return false;
}

bool	CheckTypeDouble(char *str)
{
	int		i = 0;
	bool	decimalPpoint = false;

	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && (str[i] != '.'  || (str[i] == '.' && decimalPpoint)))
			return false;
		if (str[i] == '.')
			decimalPpoint = true;
		i++;
	}
	return true;
}

void	HandleSpecialCases(char *str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (compare(str, "-inff") || compare(str, "-inf"))
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	if (compare(str, "+inff") || compare(str, "+inf"))
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	if (compare(str, "nanf") || compare(str, "nan"))
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void	StringToDouble(char *str)
{
	double	Double_num = std::atof(str);

	std::cout << "Char: ";
	if (Double_num <= CHAR_MAX && Double_num >= CHAR_MIN)
	{
		if (static_cast<int>(Double_num) >= 32 && static_cast<int>(Double_num) <= 126)
			std::cout << static_cast<char>(Double_num) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (Double_num > INT_MAX || Double_num < INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(Double_num) << std::endl;
	std::cout << std::fixed << "float: ";
	if (Double_num > FLT_MAX || Double_num < FLT_MIN || Double_num > FLT_RADIX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(Double_num) << "f" << std::endl;
	std::cout << "double: " << Double_num << std::endl;
}

void	StringToFloat(char *str)
{
	float	Float_num = std::atof(str);

	std::cout << "Char: ";
	if (Float_num <= CHAR_MAX && Float_num >= CHAR_MIN)
	{
		if (static_cast<int>(Float_num) >= 32 && static_cast<int>(Float_num) <= 126)
			std::cout << static_cast<char>(Float_num) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (Float_num > INT_MAX || Float_num < INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(Float_num) << std::endl;
	std::cout << std::fixed << "float: " << Float_num << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(Float_num) << std::endl;
}

void	StringToInt(char *str)
{
	int		Integer_num = std::atoi(str);

	std::cout << "Char: ";
	if (Integer_num >= CHAR_MIN && Integer_num <= CHAR_MAX)
	{
		if (Integer_num >= 32 && Integer_num <= 126)
			std::cout << static_cast<char>(Integer_num) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << Integer_num << std::endl;
	std::cout << std::fixed << "float: ";
	if (Integer_num > FLT_RADIX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(Integer_num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(Integer_num) << std::endl;
}

void	StringToChar(char *str)
{
	char ch = str[0];

	std::cout << "Char: " << ch << std::endl;
	std::cout << "int: " << static_cast<int>(ch) << std::endl;
	std::cout << std::fixed << "float: " << static_cast<float>(ch) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(ch) << std::endl;
}

void	CheckliteralType(char *str)
{
	if (compare(str, "-inff") || compare(str, "+inff") || compare(str, "nanf")
		|| compare(str, "-inf") || compare(str, "+inf") || compare(str, "nan"))
		HandleSpecialCases(str);
	else if (CheckTypeChar(str))
		StringToChar(str);
	else if (CheckTypeInt(str))
		StringToInt(str);
	else if (CheckTypeFloat(str))
		StringToFloat(str);
	else if (CheckTypeDouble(str))
		StringToDouble(str);
	else
		std::cerr << "Type Not recognized!!!" << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		CheckliteralType(argv[1]);
	else
		std::cerr << "Wrong number of arguments!!!" << std::endl;

	return 0;
}
