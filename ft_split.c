/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:23:34 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/20 22:57:57 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * int array_len - count the number of c separators + 1. Add 1 for NULL array terminator
 * char *str - copy of *s const argument
 * *words_len - array storing the length of each word
 */

int	count_words(const char *s, char c)
{
	int wc;
	int i;

	wc = 0;
	i = 0;
	while (s[i] !=  '\0') 
	{
		if ((i == 0 || *(s + i) == c) && *(s + i + 1) != c && *(s + i + 1) != 0)
			wc++;
		i++;
	}
	if (wc <= 1 && s[0] != c)
		wc = 1;
	return (wc);
}

char	**split_string(const char *str, char c)
{
	char **result;
    int i;
	int wc;
	int wbegin;
	int wend;

	wc = count_words(str, c);
    //printf("DEBUG: Test string [%s] has #words: %d.\n", str, wc);

	result = (char **)malloc((wc + 1) * sizeof(char *));
	if (result == 0)
		return (0);
	i = 0;
	wbegin = 0;
	wend = 0;
	while (i < wc && str[wend] != '\0')
	{
		while (str[wend] == c)
			wend++;
		wbegin = wend;
		while (str[wend] != c)
			wend++;
    	//printf("DEBUG: wbegin value s: %d.\n", wbegin);
    	//printf("DEBUG: wend value s: %d.\n", wend);
		result[i] = ft_substr(str, wbegin, wend - wbegin);
		i++;
	}
	result[i] = 0;
	return (result); 
}

char	**ft_split(char const *s, char c)
{
	int i;
	char **result;

	if (s == 0)
		return (0); 
	i = 0;
	while (s[i] == c)
		i++;
	//if (s[0] == '\0' || *ft_strchr(s, c) || i == ft_strlen(s)) 
	if (s[0] == '\0' || i == ft_strlen(s)) 
	{
		result = ft_calloc(1, sizeof(char *));
		if (result == 0)
			return (0);
		result[0] = NULL;
		return (result); 
	}
	result = split_string(s, c);
	return (result);
}
