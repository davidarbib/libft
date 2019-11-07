/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:34:29 by darbib            #+#    #+#             */
/*   Updated: 2019/11/07 17:00:37 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int	main()
{
/*
// -------strlen-------
	printf("%ld\n", ft_strlen("mdr "));
// -------bzero----------
	char *s = malloc(4);
	int i = 0;	
	strcpy(s, "mdr\n");
	ft_bzero(s, 0);
	while (i < 4)
		ft_putchar_fd(s[i++], 1);
//-----putchar,putstr,substr--------
	ft_putstr_fd("mdr g pa lu.\n", 1);
	ft_putstr_fd(ft_substr("mdr g pa lu", 0, 3), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_substr("mdr g pa lu", 3, 3), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_substr("mdr g pa lu", 5, 3), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_substr("mdr g pa lu", 0, 5), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_substr("mdr g pa lu", 0, 7), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_substr("mdr g pa lu", 0, 42), 1);
	ft_putchar_fd('\n', 1);
//------memset-------
	void *b = malloc(6);
	ft_memset(b, 'a', 7);
	printf("%s\n", b);
	void *b2 = malloc(6);
	memset(b2, 'a', 7);
	printf("%s\n", b2);
//-----memcpy-----
	char *dst = malloc(5);
	dst[1] = 'r';
	char *src = "haha";
	ft_memcpy(dst, src, strlen(src));
	printf("%s\n", dst);
	char *dst2 = malloc(5);
	dst2[1] = 'r';
	char *src2 = "haha";
	memcpy(dst2, src2, strlen(src2));
	printf("%s\n", dst2);
//-----memccpy------
	dst = malloc(8);
	src = "bonjour";
	printf("%s\n", ft_memccpy(dst, src, 'o', 0));
	printf("%s\n", dst);

	dst2 = malloc(8);
	src2 = "bonjour";
	printf("%s\n", memccpy(dst2, src2, 'o', 0));
	printf("%s\n", dst2);
//-----memmove------
	char *dst = malloc(10);
	char *src = dst + 4;

	strcpy(dst, "mdr");
	strcpy(src, "salut");
	printf("%s\n", ft_memmove(dst, src, 5));
	printf("%s\n", dst);

	char *dst2 = malloc(10);
	char *src2 = dst2 + 4;

	strcpy(dst2, "mdr");
	strcpy(src2, "salut");
	printf("%s\n", memmove(dst2, src2, 5));
	printf("%s\n", dst2);

	char *src3 = malloc(10);
	char *dst3 = src3 + 2;

	strcpy(dst3, "mdr");
	strcpy(src3, "salut");
	printf("%s\n", ft_memmove(dst3, src3, 5));
	printf("%s\n", dst3);

	char *src4 = malloc(10);
	char *dst4 = src4 + 2;

	strcpy(dst4, "mdr");
	strcpy(src4, "salut");
	printf("%s\n", memmove(dst4, src4, 5));
	printf("%s\n", dst4);
//-------memchr----------
	char *s = "lkdfsdlfkj;aaf";

	printf("%p\n", ft_memchr(s, 'j', 10));
	printf("%p\n", memchr(s, 'j', 10));
	printf("%p\n", ft_memchr(s, 'j', 5));
	printf("%p\n", memchr(s, 'j', 5));
	printf("%p\n", ft_memchr(s, 'j', 1));
	printf("%p\n", memchr(s, 'j', 1));
	printf("%p\n", ft_memchr(s, 's', 12));
	printf("%p\n", memchr(s, 's', 12));
	printf("%p\n", ft_memchr(s, 's', 9));
	printf("%p\n", memchr(s, 's', 9));
	printf("%p\n", ft_memchr(s, 's', 3));
	printf("%p\n", memchr(s, 's', 3));
	printf("%p\n", ft_memchr(s, 'l', 0));
	printf("%p\n", memchr(s, 'l', 0));
	printf("%p\n", ft_memchr(s, 'd', 0));
	printf("%p\n", memchr(s, 'd', 0));
//-------memcmp-----------
	char *s1 = "test";
	char *s2 = "testa";

	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 4));
	printf("%d\n", memcmp(s1, s2, 4));
	printf("%d\n", ft_memcmp(s1, s2, 2));
	printf("%d\n", memcmp(s1, s2, 2));
	s1 = "";
	printf("%d\n", ft_memcmp(s1, s2, 2));
	printf("%d\n", memcmp(s1, s2, 2));
	s2 = "";
	printf("%d\n", ft_memcmp(s1, s2, 2));
	printf("%d\n", memcmp(s1, s2, 2));
//------isalpha--------
	char c = 'a';
	char d = '2';

	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	printf("%d\n", ft_isalpha(d));
	printf("%d\n", isalpha(d));
//-----calloc-----
	char *mem;
	size_t i;

	mem = ft_calloc(3, 2);
	i = 0;
	while (mem[i] == 0)
	{
		printf("%zu\n", i);
		i++;
	}
//-----strdup------
	char *mem;
	size_t i;

	mem = ft_strdup("mdr");
	i = 0;
	while (mem[i] != 0)
	{
		printf("%zu\n", i);
		i++;
	}
	printf("%s\n", mem);
//----strchr------
	char *s = "bonjour";
	printf("%s\n", ft_strchr(s, 'o'));
	printf("%s\n", strchr(s, 'o'));

	s = "test";
	printf("%s\n", ft_strchr(s, 'o'));
	printf("%s\n", strchr(s, 'o'));

	s = "";
	printf("%s\n", ft_strchr(s, ' '));
	printf("%s\n", strchr(s, ' '));
	
	s = "";
	printf("%s\n", ft_strchr(s, '\0'));
	printf("%s\n", strchr(s, '\0'));
//----strrchr--------
	char *s = "bonjour";
	printf("%s\n", ft_strrchr(s, 'o'));
	printf("%s\n", strrchr(s, 'o'));

	s = "test";
	printf("%s\n", ft_strrchr(s, 'o'));
	printf("%s\n", strrchr(s, 'o'));

	s = "";
	printf("%s\n", ft_strrchr(s, ' '));
	printf("%s\n", strrchr(s, ' '));
	
	s = "";
	printf("%s\n", ft_strrchr(s, '\0'));
	printf("%s\n", strrchr(s, '\0'));
//-----strncmp--------
	char *s1 = "test";
	char *s2 = "testa";

	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d\n", strncmp(s1, s2, 2));
	s1 = "";
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d\n", strncmp(s1, s2, 2));
	s2 = "";
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d\n", strncmp(s1, s2, 2));
	s1 = "loe";
	s2 = "lo";
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
//------strlcpy---------
	char *dst = malloc(8);
	char *dst2 = malloc(8);
	char *src = "bonjour";

	printf("%zu\n", ft_strlcpy(dst, src, 4));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst2, src, 4));
	printf("%s\n", dst2);
	dst = malloc(8);
	dst2 = malloc(8);
	printf("%zu\n", ft_strlcpy(dst, src, 9));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst2, src, 9));
	printf("%s\n", dst2);
	dst = strdup("lol");
	dst2 = strdup("lol");
	printf("%zu\n", ft_strlcpy(dst, src, 0));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst2, src, 0));
	printf("%s\n", dst2);
	dst = malloc(8);
	dst2 = malloc(8);
	src = "";
	printf("%zu\n", ft_strlcpy(dst, src, 4));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst2, src, 4));
	printf("%s\n", dst2);
//-------strlcat---------
	char *dst = malloc(10);	
	memcpy(dst, "mine:", 6);
	char *dst2 = malloc(10);
	memcpy(dst2, "true:", 6);
	printf("%zu\n", ft_strlcat(dst, "OK", 8));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, "OK", 8));
	printf("%s\n", dst2);
	dst = malloc(10);	
	memcpy(dst, "mine:", 6);
	dst2 = malloc(10);	
	memcpy(dst2, "true:", 6);
	printf("%zu\n", ft_strlcat(dst, "", 8));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, "", 8));
	printf("%s\n", dst2);
	dst = malloc(10);
	memcpy(dst, "mine:", 6);
	dst2 = malloc(10);
	memcpy(dst2, "true:", 6);
	printf("%zu\n", ft_strlcat(dst, "OK", 3));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, "OK", 3));
	printf("%s\n", dst2);
	dst = malloc(12);
	memcpy(dst, "mine:", 6);
	dst2 = malloc(12);
	memcpy(dst2, "true:", 6);
	printf("%zu\n", ft_strlcat(dst, "super", 25));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, "super", 25));
	printf("%s\n", dst2);
	dst = malloc(10);
	memcpy(dst, "mine:", 6);
	dst2 = malloc(10);
	memcpy(dst2, "true:", 6);
	printf("%zu\n", ft_strlcat(dst, "OK", 1));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, "OK", 1));
	printf("%s\n", dst2);
	dst = malloc(10);
	memcpy(dst, "mine:", 6);
	dst2 = malloc(10);
	memcpy(dst2, "true:", 6);
	printf("%zu\n", ft_strlcat(dst, "OK", 0));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, "OK", 0));
	printf("%s\n", dst2);
	dst = malloc(10);
	memcpy(dst, "mine:", 6);
	dst2 = malloc(10);
	memcpy(dst2, "true:", 6);
	printf("%zu\n", ft_strlcat(dst, "", 0));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, "", 0));
	printf("%s\n", dst2);
	dst = malloc(10);
	memcpy(dst, "mine:", 6);
	dst2 = malloc(10);
	memcpy(dst2, "true:", 6);
	printf("%zu\n", ft_strlcat(dst, "", 3));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dst2, "", 3));
	printf("%s\n", dst2);
//--------strnstr---------
	char *str = "fdsajnvop;asdtotofkfj";
	
	printf("%s\n", ft_strnstr(str, "toto", 4));
	printf("%s\n", strnstr(str, "toto", 4));
	printf("%s\n", ft_strnstr(str, "toto", 18));
	printf("%s\n", strnstr(str, "toto", 18));
	printf("%s\n", ft_strnstr(str, "fkfj", 21));
	printf("%s\n", strnstr(str, "fkfj", 21));
	printf("%s\n", ft_strnstr(str, "fdsa", 21));
	printf("%s\n", strnstr(str, "fdsa", 21));
	printf("%s\n", ft_strnstr(str, "cocoa", 21));
	printf("%s\n", strnstr(str, "cocoa", 21));
//---------atoi-------------
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
//-------putendl----------
	ft_putendl_fd("ok dac", 1);
*/
//--------substr----------
	printf("%s\n", ft_substr("mdr g pa lu", 0, 3));
	printf("%s\n", ft_substr("mdr g pa lu", 3, 3));
	printf("%s\n", ft_substr("mdr g pa lu", 5, 3));
	printf("%s\n", ft_substr("mdr g pa lu", 0, 5));
	printf("%s\n", ft_substr("mdr g pa lu", 0, 7));
	printf("%s\n", ft_substr("mdr g pa lu", 0, 42));
	printf("%s\n", ft_substr("   ", 0, 2));
	printf("%s\n", ft_substr("qwerty", 4, 1));
	printf("%s\n", ft_substr("mdr g pa lu", 32, 3));
	printf("%s\n", ft_substr("", 32, 3));
	printf("%s\n", ft_substr("", 32, 3));
/*
//---------strjoin------------
	char *s1 = "Un test pour";
	char *s2 = " voir si tout fonctionne";
	
	printf("%s\n", ft_strjoin(s1, s2));
	s1 = "";
	s2 = "";
	printf("%s\n", ft_strjoin(s1, s2));
//-------strtrim-------------
	char *s = malloc(10);
	strlcpy(s, "asalutk", 10);
	printf("%s\n", s);
	printf("%s\n", ft_strtrim(s, "ak"));
	printf("%s\n", ft_strtrim(s, ""));
	printf("%s\n", ft_strtrim(s, "a"));
	printf("%s\n", ft_strtrim(s, "k"));
	printf("%s\n", ft_strtrim(s, "oha"));
	printf("%s\n", ft_strtrim(s, "aho"));
	printf("%s\n", ft_strtrim(s, "kfds"));
	printf("%s\n", ft_strtrim(s, "hcuk"));
	printf("%s\n", ft_strtrim(s, "olu"));
//-----------split-------------
	char **w;

	w = ft_split("c'est putain de drole !!!", ' ');
	while (*w)
		printf("%s\n", *w++);
	w = ft_split("c'est putain de drole !!!", '\0');
	while (*w)
		printf("%s\n", *w++);
//---------putnbr-------------
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1);
//---------strmapi---------
char	fct(unsigned int a, char c)
{
	return (c + a);	
}
	char *all_a = "aaaaaaaaaaa";

	printf("%s\n", ft_strmapi(all_a, &fct));
//---------itoa----------
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
*/
}
