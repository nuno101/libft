/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlouro <nlouro@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:23:34 by nlouro            #+#    #+#             */
/*   Updated: 2021/09/23 14:50:01 by nlouro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *
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
	int len;
	int wc;
	int wbegin;
	int wend;

	wc = count_words(str, c);
	len = ft_strlen(str);
    //printf("DEBUG: Test string [%s] has #words: %d.\n", str, wc);
    //printf("DEBUG: Test string [%s] has length: %d.\n", str, ft_strlen(str));

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
    	//printf("DEBUG 10: wend value s: %d.\n", wend);
		wbegin = wend;
    	//printf("DEBUG 20: wbegin value s: %d.\n", wbegin);
		while (str[wend] != c && wend < len)
		{
    		//printf("DEBUG 30: str[wend] value is: %c.\n", str[wend]);
			wend++;
		}
    	//printf("DEBUG 30: wend value s: %d.\n", wend);
		result[i] = ft_substr(str, wbegin, wend - wbegin);
		i++;
	}
	result[i] = NULL;
	return (result); 
}

char	**ft_split(char const *s, char c)
{
	int i;
	char **result;

	if (s == 0)
		return (0); 
	if (s[0] == 0)
		return (ft_calloc(1, sizeof(char *)));
	i = 0;
   	//printf("DEBUG 1: i: %d.\n", i);
	while (s[i] == c )
		i++;
   	//printf("DEBUG 2: i: %d.\n", i);
	//if (s[0] == '\0' || (strchr_result == NULL) || i == ft_strlen(s)) 
	if (s[0] == '\0' || i == ft_strlen(s)) 
	{
    	//printf("DEBUG 3 : %d.\n", i);
		result = ft_calloc(1, sizeof(char *));
		if (result == 0)
			return (0);
		result[0] = NULL;
		return (result); 
	}
	result = split_string(s, c);
	return (result);
}
