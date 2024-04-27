/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarjmand <sarjmand@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:57:26 by sarjmand          #+#    #+#             */
/*   Updated: 2023/08/05 18:10:15 by sarjmand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef	struct s_dict_entry
{
	char	*number;
	char	*word;
} 
t_dict_entry;

int	ft_strlen(char *str)
{
    int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t');
}

char	*ft_strtrim(char *str)
{
	int	start;
	int	end = ft_strlen(str) - 1;

	start = 0;
	while (is_whitespace(str[start]))
		start++;
	while (end > start && is_whitespace(str[end]))
		end--;
	char *trimmed = malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	trimmed[end - start + 1] = '\0';
	while (start <= end)
	{
		trimmed[start - 0] = str[start];
		start++;
	}
	return (trimmed);
}

char	*get_word_by_number(t_dict_entry *dict, char *number)
{
	int	i;

	i = 0;
	while (dict[i].number)
	{
		if (ft_strcmp(dict[i].number, number) == 0)
			return dict[i].word;
		i++;
	}
	return (NULL);
}

int	parse_dict(char *filename, t_dict_entry **dict)
{
	int	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	// Count the number of non-empty lines in the file
	int	entry_count;
	char	c;

	entry_count = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			entry_count++;
	}
	close(fd);
	*dict = malloc(sizeof(t_dict_entry) * (entry_count + 1));	
	if (!*dict)
		return (0);
	fd = open(filename, O_RDONLY);
	int	i;

	i = 0;
	while (get_next_line(fd, &line))
	{
		if (line[0] != '\0')
		{
			(*dict)[i].number = ft_strtrim(line);
			(*dict)[i].word = strchr((*dict)[i].number, ':') + 1;
			(*dict)[i].word = ft_strtrim((*dict)[i].word);
			(*dict)[i].number[ft_strlen((*dict)[i].number) - ft_strlen((*dict)[i].word) - 1] = '\0';
			i++;
		}
		free(line);
	}
	(*dict)[i].number = NULL;
	return (1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (is_whitespace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return result * sign;
}

int	convert_number(t_dict_entry *dict, char *number)
{
	char	*word = get_word_by_number(dict, number);
	if (word)
	{
		ft_putstr(word);
		return (1);
	}
	else
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
}

int	main(int argc, char **argv)
{
	t_dict_entry *dict;

	if (argc == 2 || argc == 3)
	{
		if (!parse_dict("numbers.dict", &dict))
		{
			ft_putstr("Dict Error\n");
			return (1);
		}
		if (argc == 2)
		{
			if (ft_atoi(argv[1]) < 0)
				ft_putstr("Error\n");
			else
				convert_number(dict, argv[1]);
		}
		else
		{
			if (ft_atoi(argv[2]) < 0)
				ft_putstr("Error\n");
			else
				convert_number(dict, argv[2]);
		}
	}
	else
		ft_putstr("Error\n");
	return (0);
}
