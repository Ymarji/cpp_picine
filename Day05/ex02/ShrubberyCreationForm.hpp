/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:39:10 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/01 15:18:20 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <string>
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(ShrubberyCreationForm const &);

        virtual void	formWork() const;
        
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
        virtual ~ShrubberyCreationForm();
};

#endif