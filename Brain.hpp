/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:38:01 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/04 21:49:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sstream>

class Brain{
    public:
        Brain();
        Brain(const Brain & src);
        Brain & operator=(const Brain & src);
        ~Brain();
    private:
        std::string ideas[100];
};
