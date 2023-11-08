/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:12:28 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/08 11:21:39 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
// #include "ICharacter.hpp"
class AMateria{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const AMateria & src);
        AMateria & operator=(const AMateria & src);
        virtual ~AMateria();
        AMateria(std::string const& type);
        virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);
        
}