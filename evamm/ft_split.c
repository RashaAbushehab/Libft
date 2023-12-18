/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:04:49 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:04:49 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	*get_next_word(const char **s, char c)
{
	const char	*word_start;
	int			word_len;
	char		*str;

	while (**s && **s == c)
		(*s)++;
	word_start = *s;
	while (**s && **s != c)
		(*s)++;
	word_len = *s - word_start;
	str = (char *)malloc(sizeof(char) * (word_len + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		ft_strlcpy(str, word_start, word_len + 1);
		return (str);
	}
}

int	word_check(char *word, int i, char **array)
{
	if (!word)
	{
		while (i > 0)
		{
			free(array[i - 1]);
			i--;
		}
		free(array);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int			word_count;
	int			i;
	char		**array;
	const char	*ptr;
	char		*word;

	if (!s)
		return (NULL);
	word_count = ft_countwords(s, c);
	array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (array == NULL)
		return (NULL);
	ptr = s;
	i = 0;
	while (i < word_count)
	{
		word = get_next_word(&ptr, c);
		if (!word_check(word, i, array))
			return (NULL);
		array[i] = word;
		i++;
	}
	array[word_count] = NULL;
	return (array);
}

// int main(void)
// {
//     char const *input_string = "This is a test string for splitting";
//     char split_char = ' '; 
//     char **result = ft_split(input_string, split_char);

//     if (result == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1; 
//     }

//     int i = 0;
//     while (result[i] != NULL)
//     {
//         printf("Split[%d]: \"%s\"\n", i, result[i]);
//         i++;
//     }
//     i = 0;
//     while (result[i] != NULL)
//     {
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     return (0);
// }    