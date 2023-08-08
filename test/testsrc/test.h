/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:18:30 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/08 11:02:43 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include "../../unity/src/unity.h"
#include "../../src/libft.h"

void	ft_toupper_tests(void);
void	ft_tolower_tests(void);
void	ft_isalpha_tests(void);
void	ft_isdigit_tests(void);
void	ft_isalnum_tests(void);
void	ft_isascii_tests(void);
void	ft_isprint_tests(void);
void	ft_atoi_tests(void);
void	ft_bzero_tests();
void	ft_itoa_tests();
void	ft_strchr_tests(void);
void	ft_strjoin_tests(void);

#endif