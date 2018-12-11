/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 21:04:48 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/11 21:05:48 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* COLORS */
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

int	main(void)
{
	printf(WHT "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n");
	printf(YEL "FT_ATOI\n\n");
	printf(WHT "String: ");
	printf(CYN "%s\n", "");
	int res1 = atoi("");
	int res2 = ft_atoi("");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "  \n\t\v\f\r42");
	res1 = atoi("  \n\t\v\f\r42");
	res2 = ft_atoi("  \n\t\v\f\r42");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "  \n\t\v\f\r-42");
	res1 = atoi("  \n\t\v\f\r-42");
	res2 = ft_atoi("  \n\t\v\f\r-42");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "2147483647");
	res1 = atoi("2147483647");
	res2 = ft_atoi("2147483647");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "-2147483648");
	res1 = atoi("-2147483648");
	res2 = ft_atoi("-2147483648");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "asd42");
	res1 = atoi("asd42");
	res2 = ft_atoi("asd42");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "2142");
	res1 = atoi("2142");
	res2 = ft_atoi("2142");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "2142 123");
	res1 = atoi("2142 123");
	res2 = ft_atoi("2142 123");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "+12312");
	res1 = atoi("+12312");
	res2 = ft_atoi("+12312");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "-+12312");
	res1 = atoi("-+12312");
	res2 = ft_atoi("-+12312");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "99999999999999999999999999");
	res1 = atoi("99999999999999999999999999");
	res2 = ft_atoi("99999999999999999999999999");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "-99999999999999999999999999");
	res1 = atoi("-99999999999999999999999999");
	res2 = ft_atoi("-99999999999999999999999999");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}
	
	printf(WHT "\nString: ");
	printf(CYN "%s\n", "90000000000000000000000000");
	res1 = atoi("90000000000000000000000000");
	res2 = ft_atoi("90000000000000000000000000");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "-90000000000000000000000000");
	res1 = atoi("-90000000000000000000000000");
	res2 = ft_atoi("-90000000000000000000000000");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "9223372036854775807");
	res1 = atoi("9223372036854775807");
	res2 = ft_atoi("9223372036854775807");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "-9223372036854775808");
	res1 = atoi("-9223372036854775808");
	res2 = ft_atoi("-9223372036854775808");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "000000000000000000000000000000000000005");
	res1 = atoi("000000000000000000000000000000000000005");
	res2 = ft_atoi("000000000000000000000000000000000000005");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "22222222222222222222");
	res1 = atoi("22222222222222222222");
	res2 = ft_atoi("22222222222222222222");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "-22222222222222222222");
	res1 = atoi("-22222222222222222222");
	res2 = ft_atoi("-22222222222222222222");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "9223372036854775806");
	res1 = atoi("9223372036854775806");
	res2 = ft_atoi("9223372036854775806");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "-9223372036854775806");
	res1 = atoi("-9223372036854775806");
	res2 = ft_atoi("-9223372036854775806");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}

	printf(WHT "\nString: ");
	printf(CYN "%s\n", "-9223372036854775808");
	res1 = atoi("-9223372036854775808");
	res2 = ft_atoi("-9223372036854775808");
	if (res1 == res2)
		printf(GRN "OK\n");
	else
	{
		printf(RED "FAIL\n");
		printf(GRN "Expected: %d\n", res1);
		printf(RED "Received: %d\n", res2);
	}
	return (0);
}