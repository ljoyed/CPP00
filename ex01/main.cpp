/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:18:30 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/22 18:25:39 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool adding_new_contact(PhoneBook *pb, int *index)
{
	if (*index < 8)
	{
		if (!pb->add_contact(*index))
			return (false);
		(*index)++;
	}
	else
	{
		*index = 0;
		if (!pb->add_contact(*index))
			return (false);
		(*index)++;
	}
	return (true);
}

void print_phonebook(PhoneBook *pb)
{
	std::cout << std::endl;
	std::cout << std::setw(40) << "|********** My Phonebook Program ***********|" << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nick Name";
	std::cout << "|" << std::endl;
	for (int i = 0; i < 8; i++)
		pb->print_contact(i);
	std::cout << std::endl;
}

void search_operation(PhoneBook *pb, int *search)
{
	pb->search_result(*search);
}

int	main(void)
{
	PhoneBook new_ph_book;
	std::string	cmd;
	std::string search;
	int index;
	int counter;
	
	counter = 0;
	while (1)
	{
        std::cout << "To use this phonebook program, use commands ADD or SEARCH or EXIT : ";
		if (!getline(std::cin, cmd))
		{
			std::cout << "\nError: You closed the program" << std::endl;
			break;
		}
		if (cmd == "ADD")
		{
			if (!adding_new_contact(&new_ph_book, &counter))
			{
				std::cout << "\nError: You closed the program" << std::endl;
				break ;
			}
		}
		else if (cmd == "SEARCH")
		{
			print_phonebook(&new_ph_book);
			std::cout << "To search contact, please enter a valid index number : ";
			if (!getline(std::cin, search))
			{
				std::cout << "\nError: You closed the program" << std::endl;
				break;
			}
			index = std::atoi(search.c_str());
			search_operation(&new_ph_book, &index);
		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Invalid command, try again!" << std::endl;
	}
	return (0);
}
