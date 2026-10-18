/* ************************************************************************** */
/*                                                                            */

/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:54:26 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/30 07:54:28 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

///Find a char in a given str;
///s: str to be searched;
///c: char to look for;
///return: pointer to the char found in str;

char	*ft_strchr_gnl(const char *vault, int c)
{
	size_t	i;

	i = 0;
	if (!vault)
		return (NULL);
	if ((char)c == '\0')
		return ((char *)(vault + i));
	while (vault[i] != '\0')
	{
		if (vault[i] == (char)c)
			return ((char *)(vault + i));
		i++;
	}
	// if (s[i] == '\0' && (char)c == '\0')
	// 	return ((char *)(s + i));
	return (0);
}

int	ft_strlen_gnl(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin_gnl(char *vault, char *buffer)
{
	size_t	i;
	size_t	j;
	size_t	len_vault;
	size_t	len_buffer;
	char	*joined_str;

	if (!vault)
	{
		vault = (char *)malloc(1 * sizeof(char));
		vault[0] = '\0';
	}
	if (!vault || !buffer)
		return (0);
	i = -1;
	j = 0;
	len_vault = ft_strlen_gnl(vault);
	len_buffer = ft_strlen_gnl(buffer);
	joined_str = (char *)malloc((len_vault + len_buffer + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	if(vault)
		while (vault[++i] != '\0')
			joined_str[i] = vault[i];
	while (buffer[j] != '\0')
		joined_str[i++] = buffer[j++];
	joined_str[i] = '\0';
	free(vault);
	return (joined_str);
}
