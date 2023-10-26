/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:14:09 by ewang             #+#    #+#             */
/*   Updated: 2023/09/27 15:14:59 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char            **ft_split(char *str)
{
        int             i;
        int             j;
        int             k;
        char    **split;

        i = 0;
        k = 0;
        split = (char **)malloc(sizeof(char *) * 256)))
        if(!split)
                return (NULL);
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
                i++ 1;
        while (str[i])
        {
                j = 0;
                split[k] = (char *)malloc(sizeof(char) * 4096)))
                if(!split[k])
                        return (NULL);
                
                while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                        split[k][j++] = str[i++];
                while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
                        i ++;
                split[k][j] = '\0';
                k ++;
        }
        split[k] = NULL;
        return (split);
}


#include <stdio.h>

int		main(int ac, char **av)
{
 	(void)ac;
        char **arr;
	char *phrase = "   Hello,   what\t good!  ";

        arr = ft_split(phrase);
 	
        printf("%s\n", arr[0]);
 	printf("%s\n", arr[1]);
 	printf("%s\n", arr[2]);
 	printf("%s\n", arr[3]);
 }
