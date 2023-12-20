/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:06:06 by loandrad          #+#    #+#             */
/*   Updated: 2023/10/22 18:12:05 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(){}

Contact::~Contact(){}

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

void Contact::setFirstName(std::string str)
{
    this->_firstname = str;
}

void Contact::setLastName(std::string str)
{
    this->_lastname = str;
}

void Contact::setNickName(std::string str)
{
    this->_nickname = str;
}

void Contact::setPhone(std::string str)
{
    this->_phone = str;
}

void Contact::setSecret(std::string str)
{
    this->_secret = str;
}

std::string Contact::getFirstName(void)
{
    return (this->_firstname);
}

std::string Contact::getLastName(void)
{
    return (this->_lastname);
}

std::string Contact::getNickName(void)
{
    return (this->_nickname);
}

std::string Contact::getPhone(void)
{
    return (this->_phone);
}

std::string Contact::getSecret(void)
{
    return (this->_secret);
}

bool PhoneBook::add_contact(int i)
{
    std::string str;
    
    do
    {
        std::cout << "Add first name : ";
        if (!getline(std::cin, str))
            return (false); 
        _ph_book[i].setFirstName(str);
    } while (str.empty());
    do
    {
        std::cout << "Add last name : ";
        if (!getline(std::cin, str))
            return (false); 
        _ph_book[i].setLastName(str);
    } while (str.empty());
    do
    {
        std::cout << "Add nick name : ";
        if (!getline(std::cin, str))
            return (false); 
        _ph_book[i].setNickName(str);
    } while (str.empty());
    do
    {
        std::cout << "Add phone number : ";
        if (!getline(std::cin, str))
            return (false); 
        _ph_book[i].setPhone(str);
    } while (str.empty());
    do
    {
        std::cout << "Add darkest secret : ";
        if (!getline(std::cin, str))
            return (false); 
        _ph_book[i].setSecret(str);
    } while (str.empty());
    return (true);
}

void PhoneBook::print_contact(int i)
{
    std::cout << "|";
    std::cout << std::setw(10) << i + 1;
    std::cout << "|";
    std::cout << std::setw(10) << truncate(this->_ph_book[i].getFirstName());
    std::cout << "|";
    std::cout << std::setw(10) << truncate(this->_ph_book[i].getLastName());
    std::cout << "|";
    std::cout << std::setw(10) << truncate(this->_ph_book[i].getNickName());
    std::cout << "|" << std::endl;
}

void PhoneBook::search_result(int i)
{
    if (i <= 0 || i > 8)
        std::cout << "Please enter a valid index number" << std::endl;
    else
    {
        std::cout << "First Name     : " << this->_ph_book[i - 1].getFirstName() << std::endl;
        std::cout << "Last Name      : " << this->_ph_book[i - 1].getLastName() << std::endl;
        std::cout << "Nick Name      : " << this->_ph_book[i - 1].getNickName() << std::endl;
        std::cout << "Phone No       : " << this->_ph_book[i - 1].getPhone() << std::endl;
        std::cout << "Darkest Secret : " << this->_ph_book[i - 1].getSecret() << std::endl;
    }
}

std::string	PhoneBook::truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}