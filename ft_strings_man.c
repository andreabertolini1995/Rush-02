/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:17:38 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/29 16:17:39 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
			return (0);
		i++;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	if (ft_strlen(s1) > ft_strlen(s2))
		return (0);
	else if (ft_strlen(s1) == ft_strlen(s2))
	{
		i = 0;
		while (i < ft_strlen(s1))
		{
			if (s1[i] < s2[i])
				return (1);
			else if (s1[i] > s2[i])
				return (0);
			else
				i++;
		}
	}
	return (1);
}
