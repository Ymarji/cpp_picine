/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:40:19 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:53:59 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(PresidentialPardonForm const &);

        virtual void	formWork() const;
        
        PresidentialPardonForm &operator=(PresidentialPardonForm const &);
        virtual ~PresidentialPardonForm();
};

#endif /* PRESIDENTIALPARDONFORM_HPP */
