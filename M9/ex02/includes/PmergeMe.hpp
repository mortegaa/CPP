/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:48:51 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/17 14:14:51 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>
# include <vector>
# include <deque>
# include <ctime>
# include <iostream>
# include <algorithm>
# include <sys/time.h>


class PmergeMe {

	private:
		int					_range;
		bool				_odd;
		int					_last_item;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& pm);
		PmergeMe & operator=(const PmergeMe& pm);
		bool checkInput(std::string s1, std::string s2);
		void setOdd(bool d);
		void setLastItem(int lst);

	template <typename T, typename S, typename V>
	void timedSort(T container, S& contA, V& contB, char choice)
	{
		struct timeval start, end;
		long sec, micro;

		gettimeofday(&start, NULL);

		typename T::iterator iter;
		for (iter = container.begin(); iter != container.end(); ++iter)
		{
			if ((*iter).first > (*iter).second)
				std::swap((*iter).first, (*iter).second);
		}
		for (iter = container.begin(); iter != container.end(); ++iter)
			contA.push_back((*iter).first);
	
		for (iter = container.begin(); iter != container.end(); ++iter)
			contB.push_back((*iter).second);

		std::sort(contA.begin(), contA.end());

		typename S::iterator it;
		for (it = contB.begin(); it != contB.end(); ++it)
			contA.insert(std::lower_bound(contA.begin(), contA.end(), *it), *it);
		if (_odd)
			contA.insert(std::lower_bound(contA.begin(), contA.end(), _last_item), _last_item);

		std::cout << std::endl << "After : ";

		for (it = contA.begin(); it != contA.end(); ++it)
			std::cout << *it << " ";

		gettimeofday(&end, NULL);
		sec = end.tv_sec - start.tv_sec;
		micro = end.tv_usec - start.tv_usec;
		long time = (sec / 1000000) + micro;
		std::cout << std::endl << "Time to precess a range of " << _range << " elements with ";
		if (choice == 'v')
			std::cout << "std::vector : ";
		else if (choice == 'd')
			std::cout << "std::deque : "; 
		std::cout << time << " us" << std::endl;
	}
};

#endif
