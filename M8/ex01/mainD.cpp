#include "includes/Span.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>
#include <vector>


int main()
{
	/*
	Span sp = Span(4);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	try
	{
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	

	std::cout << "Shortest:" << sp.shortestSpan() << std::endl;
	std::cout << "Longest:" << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	*/


	int max_num_elements = 10000000;
	//fill vector with max_num_elements random numbers
	std::vector<int> values_to_copy(max_num_elements);
	std::srand(std::time(nullptr));
	std::generate(values_to_copy.begin(), values_to_copy.end(), std::rand);

	std::cout << "Num elements \t | \t Time to add \t | \t Shortest span \t | \t Shortest span time \t | \t Longest span \t | \t Longest span Time" << std::endl;

	for (int num_elements = 100; num_elements <= max_num_elements; num_elements *= 10)
	{
		std::cout << std::setw(12) << num_elements << "\t | \t ";

		time_t start = clock();
		Span sp = Span(num_elements);
		sp.addRange(values_to_copy.begin(), values_to_copy.begin() + num_elements);
		std::cout << std::fixed << std::setprecision(5) << std::setw(15) << (clock() - start) / (double)CLOCKS_PER_SEC << " | ";

		start = clock();
		std::cout << std::setw(21) << sp.shortestSpan() << " | ";
		std::cout << std::fixed << std::setprecision(5) << std::setw(29) << (clock() - start) / (double)CLOCKS_PER_SEC << " | ";

		start = clock();
		std::cout << std::setw(21) << sp.longestSpan() << " | ";
		std::cout << std::fixed << std::setprecision(5) << std::setw(20) << (clock() - start) / (double)CLOCKS_PER_SEC << std::endl;
	}
	std::cout << "Adding is O(nlogn)" << std::endl;
	std::cout << "Shortest span is O(n)" << std::endl;
	std::cout << "Longest span is O(1)" << std::endl;
}
