/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:31:39 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/17 00:23:35 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <limits>

class RPN {

	private:
		std::stack<int> _stk;
		int				_res;

	public:
		RPN();
		template <typename InputIt>
		RPN(InputIt begin, InputIt end)
		{
			while (begin != end)
			{
				_stk.push(*begin);
				begin++;
			}
		}
		~RPN();
		RPN(RPN & r);
		RPN & operator=(RPN & r);
		bool isNumber(const std::string& s);
		bool addNumber(int num);
		bool calculus(std::string op);
		int getResult( void );
};

#endif
