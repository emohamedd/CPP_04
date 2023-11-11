/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:19:38 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/11 14:43:48 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        Ice(const Ice & src);
        Ice & operator=(const Ice & src);
        ~Ice();
        AMateria* clone() const;
        // void use(ICharacter& target);
};