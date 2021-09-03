/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:53:01 by ymarji            #+#    #+#             */
/*   Updated: 2021/09/03 16:53:28 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <fstream>
class RobotomyRequestForm: public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(RobotomyRequestForm const &);

        virtual void	formWork() const;
        
        RobotomyRequestForm &operator=(RobotomyRequestForm const &);
        virtual ~RobotomyRequestForm();
};

#endif /* ROBOTOMYREQUESTFORM_20COPY_HPP */
