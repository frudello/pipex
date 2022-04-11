/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello < frudello@student.42roma.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:49:25 by frudello          #+#    #+#             */
/*   Updated: 2022/04/08 17:20:31 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pipex.h"

void	correctav(char **av, char **envp)
{
	int	i;
	char *pwd;
	int fd;

	i = 0;
	pwd = ft_index_position(	);
	fd = open("testfile.txt", O_RDONLY);
	if (fd < 0)
		exit(0);

}

//tu tieni questa perchè è una funzione che ti ritorna il primo indice che trova in srcs se la stringa è uguale a tofind
int	ft_index_position(char **src, char *to_find)
{
	int	i;

	i = 0;
	while (src[i] && ft_strncmp(src[i], to_find, ft_strlen(to_find)))
		i++;
	return (i);
}

// void found_path(char **env)
// {
// 	int i;

// 	i = 1;
// 	while()
// }

int	main(int ac, char **av, char **envp)
{
	if (ac == 5)
	{

	}
}
