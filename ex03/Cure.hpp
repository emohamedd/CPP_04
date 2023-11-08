/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:18:49 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/08 11:23:11 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure();
        Cure(const Cure & src);
        Cure & operator=(const Cure & src);
        ~Cure();
        AMateria* clone() const;
        // void use(ICharacter& target);
};