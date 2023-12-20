/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:56:50 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/22 18:25:42 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
public:
	Contact();
	~Contact();
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickName(std::string str);
	void setPhone(std::string str);
	void setSecret(std::string str);

	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhone(void);
	std::string	getSecret(void);

private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		bool add_contact(int i);
		void print_contact(int i);
		void search_result(int i);
		std::string	truncate(std::string str);

	private:
		Contact _ph_book[8];
};

#endif
