#include "Bureaucrat.hpp"
#include <ostream>

int main()
{
    std::cout << "--------------[  grade = 0  ]--------------" << std::endl;
	try
	{
		Bureaucrat Bob("Bob", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------[ grade = 151 ]--------------" << std::endl;
	try
	{
		Bureaucrat Bob("Bob", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    try
	{
		Bureaucrat Bob("Bob", 120);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------[  grade = 1  ]--------------" << std::endl;
	try
	{
		Bureaucrat Bob("Bob", 1);
        Bob.grade_decremente();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------[   default   ]--------------" << std::endl;
	try
	{
		Bureaucrat Bob;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}